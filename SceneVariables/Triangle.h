//
// Created by Maryam Forootaninia on 10/13/19.
//

#ifndef ASSIGNMENT0_TRIANGLE_H
#define ASSIGNMENT0_TRIANGLE_H


#include "../Vec3.h"
#include "Vertex.h"

class Triangle {

    public:
        Vertex vertex1, vertex2, vertex3;
        Vec3 e1, e2;
        int corresponding_mtlcolor_index;

    public:

        Vertex getVertex1();

        void setVertex1(Vertex vertex1);

        Vertex getVertex2();

        void setVertex2(Vertex vertex2);

        Vertex getVertex3();

        void setVertex3(Vertex vertex3);

        int getMtColorIndex();

        void setMtColorIndex(int indx);

        Vec3 getE2();

        Vec3 getE1();

        double __area();
        double Area();
        Triangle();

};
#endif //ASSIGNMENT0_TRIANGLE_H
