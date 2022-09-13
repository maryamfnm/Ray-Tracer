//
// Created by Maryam Forootaninia on 10/13/19.
//

#ifndef ASSIGNMENT0_VERTEX_H
#define ASSIGNMENT0_VERTEX_H


class Vertex {
    public:
        double x, y, z;
        int index, normalIndex, textureIndex;
public:
        Vertex();
        double getX();

        void setX(double x);

        double getY();

        void setY(double y);

        double getZ();

        void setZ(double z);

        int getIndex();

        void setIndex(int index);

        int getNormalIndex();

        void setNormalIndex(int normalIndex);

        int getTextureIndex();

        void setTextureIndex(int textureIndex);
};


#endif //ASSIGNMENT0_VERTEX_H
