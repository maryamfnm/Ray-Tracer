//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_BKGCOLOR_H
#define ASSIGNMENT0_BKGCOLOR_H
#include <string>
using namespace std;

class Bkgcolor {
    public:
        string r;
        string g;
        string b;
    public:
        Bkgcolor();

        Bkgcolor(string r, string g, string b);

        string getR();

        void setR(string r);

        string getG();

        void setG(string g);

        string getB();

        void setB(string b);
};
#endif