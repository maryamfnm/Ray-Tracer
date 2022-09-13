//
// Created by Maryam Forootaninia on 9/20/19.
//

#include <fstream>
#include "FileManagement.h"
#include "SceneVariables/Vfov.h"
#include "SceneVariables/Ellipsoid.h"
#include "SceneVariables/Vn.h"
#include "SceneVariables/Vt.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void FileManagement::fileReader(string fName) {
    std::ifstream inputfile;
    vector<std::string> inputs;

    inputfile.open("../" + fName);
    if( inputfile.is_open()) {

        /* check to see if the file is empty exit the code */
        if (inputfile.peek() == std::ifstream::traits_type::eof()) {
            cout << "Error: File is empty\n";
            exit(11);
        }

        /* read the line and extract imsize width and height*/
        std::string line;
        int mtlcolor_count = 0;
        int vertex_index = 0;
        int normal_index = 0;
        double texture_index = 0.0;
        while (std::getline(inputfile, line)) {
            /* Next line will get the first word for each line */
            string firstVar = line.substr(0, line.find(" "));

            stringstream stream(line);
            string token;
            while (std::getline(stream, token, ' ')) {
                inputs.push_back(token);
            }
            if (firstVar == "eye") {
                if (inputs.size() == 4){
                    this->eye->setEyeX(inputs[1]);
                    this->eye->setEyeY(inputs[2]);
                    this->eye->setEyeZ(inputs[3]);
                } else {
                    cout << "value of eye is invalid";
                    exit(0);
                }
            } else if(firstVar == "viewdir") {
                if (inputs.size() == 4) {
                    this->viewDir->setVdirX(inputs[1]);
                    this->viewDir->setVdirY(inputs[2]);
                    this->viewDir->setVdirZ(inputs[3]);
                } else {
                    cout << "value of viewdir is invalid";
                    exit(0);
                }

            } else if(firstVar == "updir") {
                if (inputs.size() == 4) {
                    this->updir->setUpX(inputs[1]);
                    this->updir->setUpY(inputs[2]);
                    this->updir->setUpZ(inputs[3]);
                } else {
                    cout << "invalid values for up dir";
                    exit(0);
                }

            } else if(firstVar == "fovv") {
                if (inputs.size() == 2) {
                    this->vfov.setFov(inputs[1]);
                } else {
                    cout << "invalid number of values for vfov";
                    exit(0);
                }

            } else if(firstVar == "imsize") {
                if (inputs.size() == 3){
                    this->imsize->setWidth(inputs[1]);
                    this->imsize->setHeight(inputs[2]);
                } else {
                    cout << "invalid number of variables for imsize";
                    exit(0);
                }

            } else if(firstVar == "bkgcolor") {
                if (inputs.size() == 4) {
                    this->bkgcolor->r = inputs[1];
                    this->bkgcolor->g = inputs[2];
                    this->bkgcolor->b = inputs[3];
                } else {
                    cout << "invalid number of variables for bkgcolor";
                    exit(0);
                }

            } else if(firstVar == "mtlcolor") {
                mtlcolor_count++;
                Mtcolor mtlcolor;
                if (inputs.size() == 13) {
                    mtlcolor.Odr = std::stod(inputs[1]);
                    mtlcolor.Odg = std::stod(inputs[2]);
                    mtlcolor.Odb = std::stod(inputs[3]);
                    mtlcolor.Osr = std::stod(inputs[4]);
                    mtlcolor.Osg = std::stod(inputs[5]);
                    mtlcolor.Osb = std::stod(inputs[6]);
                    mtlcolor.ka = std::stod(inputs[7]);
                    mtlcolor.kd = std::stod(inputs[8]);
                    mtlcolor.ks = std::stod(inputs[9]);
                    mtlcolor.n = std::stod(inputs[10]);
                    mtlcolor.alpha = std::stod(inputs[11]);
                    mtlcolor.eta = std::stod(inputs[12]);
                    this->_mtlcolor.push_back(mtlcolor);
                } else {
                    cout << "invalid number of variables for mtlcolor";
                    exit(0);
                }

            } else if(firstVar == "sphere") {
                Sphere _sphere;
                if (inputs.size() == 5) {
                    _sphere.setCX(std::stod(inputs[1]));
                    _sphere.setCY(std::stod(inputs[2]));
                    _sphere.setCZ(std::stod(inputs[3]));
                    _sphere.setR(std::stod(inputs[4]));
                    _sphere.setM(mtlcolor_count);
                    this->sphere.push_back(_sphere);
                } else {
                    cout << "invalid number of variables for sphere";
                    exit(0);
                }

            } else if(firstVar == "light") {
                Light _light;
                if (inputs.size() == 8) {
                    _light.setX(std::stod(inputs[1]));
                    _light.setY(std::stod(inputs[2]));
                    _light.setZ(std::stod(inputs[3]));
                    _light.setW(std::stod(inputs[4]));
                    _light.setR(std::stod(inputs[5]));
                    _light.setG(std::stod(inputs[6]));
                    _light.setB(std::stod(inputs[7]));
                    this->light.push_back(_light);
                } else {
                    cout << "invalid number of variables for light, the light should have this format 7 4 0 1 1 1 1";
                    exit(0);
                }

            } else if(firstVar == "ellipsoid") {
                Ellipsoid _ellipsoid;
                if (inputs.size() == 7) {
                    _ellipsoid.setCX(inputs[1]);
                    _ellipsoid.setCY(inputs[2]);
                    _ellipsoid.setCZ(inputs[3]);
                    _ellipsoid.setRX(inputs[4]);
                    _ellipsoid.setRY(inputs[5]);
                    _ellipsoid.setRZ(inputs[6]);
                    this->ellipsoid.push_back(_ellipsoid);
                } else {
                    cout << "invalid number of variables for ellipsoid";
                    exit(0);
                }
            } else if (firstVar == "v") {
                if (inputs.size() == 4) {
                    vertex_index = vertex_index + 1;
                    Vertex vertex;
                    vertex.setX(stod(inputs[1]));
                    vertex.setY(stod(inputs[2]));
                    vertex.setZ(stod(inputs[3]));
                    vertex.index = vertex_index;
                    vertex.normalIndex = 0;
                    this->_vertex_vetor.push_back(vertex);
                }
            }else if (firstVar == "vt") {
                if (inputs.size() == 3) {
                    texture_index = texture_index + 1.0;
                    Vt _vt;
                    _vt.u = stod(inputs[1]);
                    _vt.v = stod(inputs[2]);
                    _vt.texture_index = texture_index;
                    this->vt.push_back(_vt);
                }
            } else if (firstVar == "f") {
                if (inputs.size() == 4) {
                    Triangle _triangle;
                    vector<Vertex> triagnle_vertices;
                    /******* For loop through each face *******/
                    for(int face_index=1; face_index<=3 ; face_index++) {
                        Vertex _Vertex;
                        std::string in_1_v = inputs[face_index].substr(0, inputs[face_index].find("/"));
                        int in_1_v_int = std::stoi(in_1_v) - 1;
                        std::string in_1_vt = inputs[face_index].substr(2, inputs[face_index].find("/"));
                        int in_1_vt_int;
                        if (!(in_1_vt == "/")){
                            in_1_vt_int = std::stoi(in_1_vt);
                        } else {
                            in_1_vt_int = -1;
                        }
                        int in_1_vn_int;
                        if (inputs[face_index].size() == 3) {
                            in_1_vn_int = -1;
                        } else {
                            std::size_t found = inputs[face_index].find_last_of("/");
                            std::string in_1_vn = inputs[face_index].substr(found + 1);
                            if (!(in_1_vn == "")) {
                                in_1_vn_int = std::stoi(in_1_vn);
                            } else {
                                in_1_vn_int = -1;
                            }
                        }

                        _Vertex = this->_vertex_vetor[in_1_v_int];
                        this->_vertex_vetor[in_1_v_int].textureIndex = in_1_vt_int;
                        this->_vertex_vetor[in_1_v_int].normalIndex = in_1_vn_int;

                        _Vertex.textureIndex = in_1_vt_int;
                        _Vertex.normalIndex = in_1_vn_int;

                        triagnle_vertices.push_back(_Vertex);
                    }
                    _triangle.vertex1 = triagnle_vertices[0];
                    _triangle.vertex2 = triagnle_vertices[1];
                    _triangle.vertex3 = triagnle_vertices[2];
                    _triangle.corresponding_mtlcolor_index = mtlcolor_count;
                    _triangle.e1.a = 0; _triangle.e1.b = 0; _triangle.e1.c = 0;
                    _triangle.e2.a = 0; _triangle.e2.b = 0; _triangle.e2.c = 0;
                    this->triangle.push_back(_triangle);
                }
            } else if (firstVar == "vn") {
                if (inputs.size() == 4) {
                    normal_index = normal_index + 1;
                    Vn _vn;
                    _vn.vn.setA(stod(inputs[1]));
                    _vn.vn.setB(stod(inputs[2]));
                    _vn.vn.setC(stod(inputs[3]));
                    _vn.vn_index = normal_index;
                    this->vn.push_back(_vn);
                }
            } else if(firstVar == "texture") {
                std::ifstream textureinputfile;
                textureinputfile.open("../rainbow-stripes.ppm");
                if (textureinputfile.is_open()) {
                    if (textureinputfile.peek() == std::ifstream::traits_type::eof()) {
                        cout << "Error: File is empty\n";
                        exit(11);
                    }
                    string textureline;
                    vector<std::string> textureArray;
                    while (getline(textureinputfile, textureline)) {
                        stringstream stream(textureline);
                        std::string _token;
                        std::string _token1;
                        while (std::getline(stream, _token, '\n')) {
                            textureArray.push_back(_token);
                        }
                    }
                    std::string img = textureArray[0];
                    vector<std::string> imgData;
                    std::istringstream iss(img);
                    for(std::string s; iss >> s;) {
                        imgData.push_back(s);
                    }
                    double width = stod(imgData[1]);
                    double height = stod(imgData[2]);
                    this->texture_height = height;
                    this->texture_width = width;
                    textureArray.erase(textureArray.begin());

                    int textureSize = int(textureArray.size() - 1);

                    /* Read the rgb values and stores them in Vec3 object*/
                    for (int u = 0; u <= textureSize; u += 3) {
                        Vec3 _texture;
                        double _a = std::stod(textureArray[u]);
                        double _b = std::stod(textureArray[u+1]);
                        double _c = std::stod(textureArray[u+2]);
                        _texture.a = _a;
                        _texture.b = _b;
                        _texture.c = _c;
                        this->texture_vector.push_back(_texture);
                    }
                    textureArray.clear();
                }
                textureinputfile.close();
            }

            inputs.clear();
        }
        inputfile.close();
    } else {
        cout << "Error opening the file";
        exit(11);
    }
}

FileManagement::FileManagement() {}
