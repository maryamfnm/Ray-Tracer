//
// Created by Maryam Forootaninia on 10/20/19.
//

#include "Texture.h"

Vec3 Texture::getRgb() {
    return rgb;
}

void Texture::setRgb(Vec3 rgb) {
    Texture::rgb = rgb;
}

int Texture::getIIndex() {
    return i_index;
}

void Texture::setIIndex(int iIndex) {
    i_index = iIndex;
}

int Texture::getJIndex() {
    return j_index;
}

void Texture::setJIndex(int jIndex) {
    j_index = jIndex;
}

Texture::Texture() {

}
