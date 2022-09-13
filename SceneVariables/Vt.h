//
// Created by Maryam Forootaninia on 10/20/19.
//

#ifndef ASSIGNMENT0_VT_H
#define ASSIGNMENT0_VT_H


#include "../Vec3.h"

class Vt {
    public:
        double u,v, texture_index;

        double getU() const;

        void setU(double u);

        double getV() const;

        void setV(double v);

        Vt();

};


#endif //ASSIGNMENT0_VT_H
