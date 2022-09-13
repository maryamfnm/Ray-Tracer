#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Color.h"
#include "ViewingWindow.h"
#include "FileManagement.h"
#include "Helper/Helper.h"
#include "SceneVariables/Sphere.h"
#include "RayTracer/Ray.h"
#include "SceneVariables/Objects.h"
#include <string>
#include <cmath>
#include<string.h>
#include <stack>

using namespace std;

int main(int argc, char *argv[]) {

    /* variable declarations */
    vector<std::string> inputs;
    std::ofstream outputFile;
    //std::string filename;
    std::string outputFilename;
    string case1 = "case1";
    string case2 = "case2";
    string case3 = "case3";


    auto helper = new Helper();
    /* Output file Array to store color values of image */
    string filename = (string) argv[1];
    int ext = filename.find(".txt");

    /* The input file format has to be .txt */
    if (ext < 1) {
        cout << "Error: Incorrect input file format, try again with .txt extension";
        exit(11);
    }
    else if (ext >= 1)  {
        size_t lastIndex = filename.find_last_of(".");
        string rawFileName = filename.substr(0, lastIndex);
        outputFilename = "../" + rawFileName + ".ppm";
    }

    auto fileManagement = new FileManagement();
    fileManagement->fileReader(filename);

    /* gracefully handling some incorrect data line 50  to 76 */
    double _up_x = stod(fileManagement->updir->getUpX());
    double _up_y = stod(fileManagement->updir->getUpY());
    double _up_z = stod(fileManagement->updir->getUpZ());
    double up_vect[] = {_up_x, _up_y, _up_z};

    double _v_x = stod(fileManagement->viewDir->getVdirX());
    double _v_y = stod(fileManagement->viewDir->getVdirY());
    double _v_z = stod(fileManagement->viewDir->getVdirZ());
    double v_vec[] = {_v_x, _v_y, _v_z};

    double results[3];
    helper->crossProduct(up_vect, v_vec, results);

    if (results[0] == 0 && results[1] == 0 && results[2] == 0) {
        cout <<  "up and viewing directions can not be parralel";
        exit(0);
    }

    if (std::stod(fileManagement->vfov.getFov()) >= 180 ) {
        cout <<  "invalid vfov value it has to be less than 180";
        exit(0);
    }

    if (std::stoi(fileManagement->imsize->getWidth()) <= 0 ||std::stoi(fileManagement->imsize->getHeight()) <= 0) {
        cout <<  "Invalid size of image";
        exit(0);
    }

    float height = stof(fileManagement->imsize->getHeight());
    float width =  stof(fileManagement->imsize->getWidth());

    /* determine the aspect ratio */
    float aspectRatio = width / height;

    double dist = height / (2* tan(stod(fileManagement->vfov.getFov()) *3.14/ 360));

    /* defining “viewing window” in world coordinate space */
    auto window = new ViewingWindow();

    /* Find u and v */
    double vdirx = std::stod(fileManagement->viewDir->getVdirX());
    double vdiry = std::stod(fileManagement->viewDir->getVdirY());
    double vdirz = std::stod(fileManagement->viewDir->getVdirZ());
    double viewdir[] = { vdirx, vdiry, vdirz };
    double up_x = std::stod(fileManagement->updir->getUpX());
    double up_y = std::stod(fileManagement->updir->getUpY());
    double up_z = std::stod(fileManagement->updir->getUpZ());
    double updir[] = {up_x, up_y, up_z};

    /* calculate u */
    double u[3];
    helper->crossProduct(viewdir, updir, u);

    /* calculate v */
    double v[3];
    helper->crossProduct(u, viewdir,v);

    /* Defining the four corners of the viewing window */
    window->calculateViewingWindowCoordinates(*fileManagement->eye, u, v, viewdir, height, width, dist);

    /* create the sphere object */
    Ray *ray = new Ray();

    Eye *eye = new Eye(fileManagement->eye->getEyeX(), fileManagement->eye->getEyeY(), fileManagement->eye->getEyeZ());

    /* Define the equation of the ray for each pixel in the output image */
    int im_width = stoi(fileManagement->imsize->getWidth());
    int im_height = stoi(fileManagement->imsize->getHeight());

    /* start writing to the output .ppm file */
    outputFile.open(outputFilename);

    outputFile << "P3" << std::endl;
    outputFile << "# creating output image in ASCII PPM format" << std::endl;
    outputFile << fileManagement->imsize->getWidth() << " " << fileManagement->imsize->getHeight() << std::endl;
    outputFile << 255 << std::endl;

    Color output_file_pixel[im_width][im_height];
    int r,g,b;

    for (int i = 0 ; i<= im_width-1; i++) {
        for (int j = 0; j<= im_height-1; j++) {
            vector <double> eta;
            eta.push_back(1.0);
            Vec3 point;
            /* find the mapping between the points in view_window and pixel location in outputfilen*/
            point = window->mapping(i, j, height, width);
            double pts[3];
            double p1 = point.getA();
            double p2 = point.getB();
            double p3 = point.getC();
            pts[0] = p1;
            pts[1] = p2;
            pts[2] = p3;

            /* Calculate Ray Direction and ray function */
            Vec3 _direction = ray->rayDir(eye, pts);
            Vec3 eye_vec;
            eye_vec.a = stod(eye->getEyeX());
            eye_vec.b = stod(eye->getEyeY());
            eye_vec.c = stod(eye->getEyeZ());
            Ray _ray(eye_vec,_direction);
            int depth = 0;
            Color color;

            color = ray->Trace_Ray(_ray, *fileManagement, depth, eta);
            eta.clear();

            /* start writing to the pixel values */
            r = int(color.getR()*255);
            g = int(color.getG()*255);
            b = int(color.getB()*255);

            if (r>255) {
                r = 255;
            }
            if (g>255) {
                g = 255;
            }
            if (b>255) {
                b = 255;
            }
            outputFile << r << " " << g << " " << b << std::endl;

        }
    }
    outputFile.close();
    return 0;
}
