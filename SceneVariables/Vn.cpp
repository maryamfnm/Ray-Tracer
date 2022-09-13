//
// Created by Maryam Forootaninia on 10/15/19.
//

#include "Vn.h"

Vec3 Vn::getVn() {
    return vn;
}

void Vn::setVn(Vec3 vn) {
    Vn::vn = vn;
}

int Vn::getVnIndex(){
    return vn_index;
}

void Vn::setVnIndex(int vnIndex) {
    vn_index = vnIndex;
}

Vn::Vn() {

}
