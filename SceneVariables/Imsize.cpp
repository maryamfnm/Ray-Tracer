//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Imsize.h"
#include <string>
using namespace std;

string Imsize::getWidth() {
    return width;
}

void Imsize::setWidth(string width) {
    Imsize::width = width;
}

string Imsize::getHeight() {
    return height;
}

void Imsize::setHeight(string height) {
    Imsize::height = height;
}

Imsize::Imsize(string w, string h) {
    this->width = w;
    this->height = h;
}

Imsize::Imsize() {

}
