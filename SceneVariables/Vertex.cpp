//
// Created by Maryam Forootaninia on 10/13/19.
//

#include "Vertex.h"

double Vertex::getX() {
    return x;
}

void Vertex::setX(double x) {
    Vertex::x = x;
}

double Vertex::getY() {
    return y;
}

void Vertex::setY(double y) {
    Vertex::y = y;
}

double Vertex::getZ() {
    return z;
}

void Vertex::setZ(double z) {
    Vertex::z = z;
}

Vertex::Vertex() {

}

int Vertex::getIndex() {
    return index;
}

void Vertex::setIndex(int index) {
    Vertex::normalIndex = index;
}

int Vertex::getNormalIndex() {
    return normalIndex;
}

void Vertex::setNormalIndex(int normalIndex) {
    Vertex::normalIndex = normalIndex;

}

int Vertex::getTextureIndex() {
    return textureIndex;
}

void Vertex::setTextureIndex(int textureIndex) {
    Vertex::textureIndex = textureIndex;
}
