//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_IMSIZE_H
#define ASSIGNMENT0_IMSIZE_H
#include <string>
using namespace std;

class Imsize {

    private:
        string width;
        string height;

    public:

        Imsize();

        Imsize(string w,string h);

        string getWidth();

        void setWidth(string width);

        string getHeight();

        void setHeight(string height);
};


#endif
