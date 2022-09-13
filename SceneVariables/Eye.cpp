//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Eye.h"
#include <string>
using namespace std;

Eye::Eye() {}

Eye::Eye(string x, string y, string z) {
    this->eye_x = x;
    this->eye_y = y;
    this->eye_z = z;
}

string Eye::getEyeX() {
    return this->eye_x;
}

string Eye::getEyeY() {
    return this->eye_y;
}

string Eye::getEyeZ() {
    return this->eye_z;
}

void Eye::setEyeX(string x) {
    this->eye_x = x;
}

void Eye::setEyeY(string y) {
    this->eye_y = y;
}

void Eye::setEyeZ(string z) {
    this->eye_z = z;
}


