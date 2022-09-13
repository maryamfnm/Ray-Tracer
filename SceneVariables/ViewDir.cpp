//
// Created by Maryam Forootaninia on 9/20/19.
//
#include <string>
#include "ViewDir.h"
using namespace std;

ViewDir::ViewDir() {

}

ViewDir::ViewDir(string x, string y, string z) {

}
string ViewDir::getVdirX() {
    return vdir_x;
}

void ViewDir::setVdirX(string vdirX) {
    vdir_x = vdirX;
}

string ViewDir::getVdirY() {
    return vdir_y;
}

void ViewDir::setVdirY(string vdirY) {
    vdir_y = vdirY;
}

string ViewDir::getVdirZ() {
    return vdir_z;
}

void ViewDir::setVdirZ(string vdirZ) {
    vdir_z = vdirZ;
}

