//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_VFOV_H
#define ASSIGNMENT0_VFOV_H

#include <string>
using namespace std;

class Vfov {

    private:
        string fov;
    public:
        Vfov();
        Vfov(string fov);
        string getFov();
        void setFov(string fov);
};

#endif
