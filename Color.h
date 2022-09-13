//
// Created by Maryam Forootaninia on 9/10/19.
//

#ifndef ASSIGNMENT0_COLOR_H
#define ASSIGNMENT0_COLOR_H


class Color {

    public:
        double r;
        double g;
        double b;

    double getR() const;

    void setR(double r);

    double getG() const;

    void setG(double g);

    double getB() const;

    void setB(double b);


        Color(){
            r = 0.;
            g = 0.;
            b = 0.;
        }
        Color(double _r, double _g, double _b)
        {
            r = _r;
            g = _g;
            b = _b;
        };
        Color ShadeRay();
};

#endif
