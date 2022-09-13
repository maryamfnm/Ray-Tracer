//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Sphere.h"
#include <string>
using namespace std;

double Sphere::getCX() {
    return this->c_x;
}

void Sphere::setCX(double cX) {
    this->c_x = cX;
}

double Sphere::getCY() {
    return this->c_y;
}

void Sphere::setCY(double cY) {
    this->c_y = cY;
}

double Sphere::getCZ() {
    return this->c_z;
}

void Sphere::setCZ(double cZ) {
    this->c_z = cZ;
}

double Sphere::getR() {
    return this->r;
}

void Sphere::setR(double r) {
    this->r = r;
}

Sphere::Sphere(double cX, double cY, double cZ, double r) {
    this->c_x = cX;
    this->c_y = cY;
    this->c_z = cZ;
    this->r = r;
}

Sphere::Sphere() {

}

int Sphere::getM() const {
    return m;
}

void Sphere::setM(int m) {
    Sphere::m = m;
}
