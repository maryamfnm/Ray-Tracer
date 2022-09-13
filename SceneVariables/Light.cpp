//
// Created by Maryam Forootaninia on 9/29/19.
//

#include "Light.h"

double Light::getX() const {
    return x;
}

void Light::setX(double x) {
    Light::x = x;
}

double Light::getY() const {
    return y;
}

void Light::setY(double y) {
    Light::y = y;
}

double Light::getZ() const {
    return z;
}

void Light::setZ(double z) {
    Light::z = z;
}

double Light::getR() const {
    return r;
}

void Light::setR(double r) {
    Light::r = r;
}

double Light::getG() const {
    return g;
}

void Light::setG(double g) {
    Light::g = g;
}

double Light::getB() const {
    return b;
}

void Light::setB(double b) {
    Light::b = b;
}

double Light::getW() {
    return w;
}

void Light::setW(double w) {
    Light::w = w;
}

Light::Light() {

}
