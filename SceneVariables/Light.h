//
// Created by Maryam Forootaninia on 9/29/19.
//

#ifndef ASSIGNMENT0_LIGHT_H
#define ASSIGNMENT0_LIGHT_H


class Light {
    private:
        double x;
        double y;
        double z;
        double w;
        double r;
        double g;
        double b;

    public:

        Light();

        double getW();

        void setW(double w);

        double getX() const;

        void setX(double x);

        double getY() const;

        void setY(double y);

        double getZ() const;

        void setZ(double z);

        double getR() const;

        void setR(double r);

        double getG() const;

        void setG(double g);

        double getB() const;

        void setB(double b);
};


#endif
