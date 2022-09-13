//
// Created by Maryam Forootaninia on 10/15/19.
//

#ifndef ASSIGNMENT0_VN_H
#define ASSIGNMENT0_VN_H


#include "../Vec3.h"

class Vn {
    public :
        Vec3 vn;
        int vn_index;

        Vec3 getVn();

        void setVn(Vec3 vn);

        int getVnIndex();

        void setVnIndex(int vnIndex);

        Vn();

};
#endif //ASSIGNMENT0_VN_H
