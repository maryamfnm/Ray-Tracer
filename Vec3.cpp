//
// Created by Maryam Forootaninia on 10/8/19.
//

#include "Vec3.h"

double Vec3::getA() const {
    return a;
}

void Vec3::setA(double a) {
    Vec3::a = a;
}

double Vec3::getB() const {
    return b;
}

void Vec3::setB(double b) {
    Vec3::b = b;
}

double Vec3::getC() const {
    return c;
}

void Vec3::setC(double c) {
    Vec3::c = c;
}

Vec3::Vec3(double a, double b, double c) : a(a), b(b), c(c) {}
Vec3::Vec3(){}
