//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Ellipsoid.h"
#include <string>
using namespace std;

Ellipsoid::Ellipsoid(string cX, string cY, string cZ, string rX, string rY, string rZ) : c_x(cX), c_y(cY), c_z(cZ), r_x(rX),
                                                                                   r_y(rY), r_z(rZ) {}

string Ellipsoid::getCX() {
    return this->c_x;
}

void Ellipsoid::setCX(string cX) {
    this->c_x = cX;
}

string Ellipsoid::getCY() {
    return this->c_y;
}

void Ellipsoid::setCY(string cY) {
    this->c_y = cY;
}

string Ellipsoid::getCZ() {
    return this->c_z;
}

void Ellipsoid::setCZ(string cZ) {
    this->c_z = cZ;
}

string Ellipsoid::getRX() {
    return this->r_x;
}

void Ellipsoid::setRX(string rX) {
    this->r_x = rX;
}

string Ellipsoid::getRY() {
    return this->r_y;
}

void Ellipsoid::setRY(string rY) {
    this->r_y = rY;
}

string Ellipsoid::getRZ() {
    return this->r_z;
}

void Ellipsoid::setRZ(string rZ) {
    this->r_z = rZ;
}

Ellipsoid::Ellipsoid() {

}
