//
// Created by Maryam Forootaninia on 10/20/19.
//

#ifndef ASSIGNMENT0_TEXTURE_H
#define ASSIGNMENT0_TEXTURE_H


#include "../Vec3.h"

class Texture {
    public :
        Vec3 rgb;
        int i_index, j_index;

        Vec3 getRgb();

        void setRgb(Vec3 rgb);

        int getIIndex();

        void setIIndex(int iIndex);

        int getJIndex();

        void setJIndex(int jIndex);

        Texture();


};


#endif //ASSIGNMENT0_TEXTURE_H
