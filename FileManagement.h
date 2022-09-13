//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_FILEMANAGEMENT_H
#define ASSIGNMENT0_FILEMANAGEMENT_H

#include <string>
#include <vector>
#include "SceneVariables/Vfov.h"
#include "SceneVariables/ViewDir.h"
#include "SceneVariables/Updir.h"
#include "SceneVariables/Eye.h"
#include "SceneVariables/Imsize.h"
#include "SceneVariables/Sphere.h"
#include "SceneVariables/Bkgcolor.h"
#include "SceneVariables/Mtcolor.h"
#include "SceneVariables/Ellipsoid.h"
#include "SceneVariables/Light.h"
#include "SceneVariables/Triangle.h"
#include "SceneVariables/Vertex.h"
#include "SceneVariables/Vn.h"
#include "SceneVariables/Vt.h"
#include "SceneVariables/Texture.h"

using namespace std;

class FileManagement {
    public:
        double texture_width, texture_height;
        FileManagement();
        void fileReader(string fName);
        Vfov vfov;
        ViewDir *viewDir = new ViewDir();
        Updir *updir = new Updir();
        Eye *eye = new Eye();
        Imsize *imsize = new Imsize();
        vector<Sphere> sphere;
        vector<Ellipsoid> ellipsoid;
        Bkgcolor *bkgcolor = new Bkgcolor();
        vector<Mtcolor> _mtlcolor;
        vector<Light> light;
        vector<Triangle> triangle;
        vector<Vertex> _vertex_vetor;
        vector<Vn> vn;
        vector<Vt> vt;
        vector<Vec3> texture_vector;
};
#endif
