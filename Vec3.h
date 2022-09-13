//
// Created by Maryam Forootaninia on 10/8/19.
//

#ifndef ASSIGNMENT0_VEC3_H
#define ASSIGNMENT0_VEC3_H


class Vec3 {

public:
    double a;
    double b;
    double c;
public:
    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

    double getC() const;

    void setC(double c);

public:
    Vec3();

    Vec3(double a, double b, double c);

};


#endif //ASSIGNMENT0_VEC3_H
