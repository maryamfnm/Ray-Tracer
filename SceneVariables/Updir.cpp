//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Updir.h"
#include <string>
using namespace std;

Updir::Updir(string upX, string upY, string upZ) : up_x(upX), up_y(upY), up_z(upZ) {}

string Updir::getUpX() {
    return up_x;
}

void Updir::setUpX(string upX) {
    up_x = upX;
}

string Updir::getUpY() {
    return up_y;
}

void Updir::setUpY(string upY) {
    up_y = upY;
}

string Updir::getUpZ() {
    return up_z;
}

void Updir::setUpZ(string upZ) {
    up_z = upZ;
}

Updir::Updir() {

}
