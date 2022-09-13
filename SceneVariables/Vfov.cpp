//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Vfov.h"
#include <string>
using namespace std;

Vfov::Vfov(string fov) : fov(fov) {}

string Vfov::getFov() {
    return fov;
}

void Vfov::setFov(string fov) {
    Vfov::fov = fov;
}

Vfov::Vfov() {

}
