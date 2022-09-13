//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_UPDIR_H
#define ASSIGNMENT0_UPDIR_H

#include <string>
using namespace std;

class Updir {
    private:
        string up_x;
        string up_y;
        string up_z;
public:

    Updir();

    Updir(string upX, string upY, string upZ);

    string getUpX();

    void setUpX(string upX);

    string getUpY();

    void setUpY(string upY);

    string getUpZ();

    void setUpZ(string upZ);
};

#endif
