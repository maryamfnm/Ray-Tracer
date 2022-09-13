//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_SPHERE_H
#define ASSIGNMENT0_SPHERE_H
#include <string>

using namespace std;

class Sphere{

    private:
        double c_x;
        double c_y;
        double c_z;
        double r;
        int m;
public:
    int getM() const;

    void setM(int m);

public:
        Sphere();

        Sphere(double cX, double cY, double cZ, double r);

        double getCX();

        void setCX(double cX);

        double getCY();

        void setCY(double cY);

        double getCZ();

        void setCZ(double cZ);

        double getR();

        void setR(double r);
};
#endif
