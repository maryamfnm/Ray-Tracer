//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Bkgcolor.h"
#include <string>
using namespace std;

Bkgcolor::Bkgcolor(string r, string g, string b) : r(r), g(g), b(b) {}

string Bkgcolor::getR() {
    return r;
}

void Bkgcolor::setR(string r) {
    Bkgcolor::r = r;
}

string Bkgcolor::getG() {
    return g;
}

void Bkgcolor::setG(string g) {
    Bkgcolor::g = g;
}

string Bkgcolor::getB() {
    return b;
}

void Bkgcolor::setB(string b) {
    Bkgcolor::b = b;
}

Bkgcolor::Bkgcolor() {

}
