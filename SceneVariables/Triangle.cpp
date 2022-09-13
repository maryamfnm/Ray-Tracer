//
// Created by Maryam Forootaninia on 10/13/19.
//

#include "Triangle.h"
#include "../Helper/Helper.h"
#include <cmath>

Triangle::Triangle() {}

Vertex Triangle::getVertex1() {
    return vertex1;
}

void Triangle::setVertex1(Vertex vertex1) {
    Triangle::vertex1 = vertex1;
}

int Triangle::getMtColorIndex() {
    return corresponding_mtlcolor_index;
}

void Triangle::setMtColorIndex(int index) {
    Triangle::corresponding_mtlcolor_index = index;
}

Vertex Triangle::getVertex2() {
    return vertex2;
}

void Triangle::setVertex2(Vertex vertex2) {
    Triangle::vertex2 = vertex2;
}

Vertex Triangle::getVertex3() {
    return vertex3;
}

void Triangle::setVertex3(Vertex vertex3) {
    Triangle::vertex3 = vertex3;
}
Vec3 Triangle::getE1(){
    this->e1.a = this->getVertex2().getX() - this->getVertex1().getX();
    this->e1.b = this->getVertex2().getY() - this->getVertex1().getY();
    this->e1.c =this->getVertex2().getZ() - this->getVertex1().getZ();
    return this->e1;
}

Vec3 Triangle::getE2(){
    this->e2.a = this->getVertex3().getX() - this->getVertex1().getX();
    this->e2.b = this->getVertex3().getY() - this->getVertex1().getY();
    this->e2.c = this->getVertex3().getZ() - this->getVertex1().getZ();
    return this->e2;
}

double Triangle::__area() {
    double l1[3], l2[3], l3[3], A;
    l1[0] = abs(this->getVertex2().getX() - this->getVertex1().getX());
    l1[1] = abs(this->getVertex2().getY() - this->getVertex1().getY());
    l1[2] = abs(this->getVertex2().getZ() - this->getVertex1().getZ());
    double L_1 = sqrt(l1[0] + l1[1] + l1[2]);

    l2[0] = abs(this->getVertex3().getX() - this->getVertex2().getX());
    l2[1] = abs(this->getVertex3().getY() - this->getVertex2().getY());
    l2[2] = abs(this->getVertex3().getZ() - this->getVertex2().getZ());
    double L_2 = sqrt(l2[0] + l2[1] + l2[2]);

    l3[0] = abs(this->getVertex3().getX() - this->getVertex1().getX());
    l3[1] = abs(this->getVertex3().getY() - this->getVertex1().getY());
    l3[2] = abs(this->getVertex3().getZ() - this->getVertex1().getZ());
    double L_3 = sqrt(l3[0] + l3[1] + l3[2]);

    double first = L_1 + L_2 + L_3;
    double second = -1.0*L_1 + L_2 + L_3;
    double third = L_1 - L_2 + L_3;
    double forth = L_1 + L_2 - L_3;
    A = 0.25*sqrt(first*second*third*forth);
    return A;
}

double Triangle::Area() {
    auto *helper = new Helper();
    double A;
    Vec3 e_1 = this->getE1();
    Vec3 e_2 = this->getE2();

    double e_1_double[3] = {e_1.getA(), e_1.getB(), e_1.getC()};
    double e_2_double[3] = {e_2.getA(), e_2.getB(), e_2.getC()};
    double e1_e2[3];

    helper->crossProduct(e_1_double, e_2_double, e1_e2);

    double a = sqrt((e1_e2[0]*e1_e2[0]) + (e1_e2[1]*e1_e2[1]) + (e1_e2[2]*e1_e2[2]));
    A = 0.5*a;
    return A;
}


