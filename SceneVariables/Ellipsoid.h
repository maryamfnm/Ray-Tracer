//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_ELLIPSOID_H
#define ASSIGNMENT0_ELLIPSOID_H
#include <string>

using namespace std;

class Ellipsoid {

    private:
        string c_x;
        string c_y;
        string c_z;
        string r_x;
        string r_y;
        string r_z;
    public:
        Ellipsoid();

        Ellipsoid(string cX, string cY, string cZ, string rX, string rY, string rZ);

        string getCX();

        void setCX(string cX);

        string getCY();

        void setCY(string cY);

        string getCZ();

        void setCZ(string cZ);

        string getRX();

        void setRX(string rX);

        string getRY();

        void setRY(string rY);

        string getRZ();

        void setRZ(string rZ);
};


#endif
