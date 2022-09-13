//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_VIEWDIR_H
#define ASSIGNMENT0_VIEWDIR_H
#include <string>
using namespace std;

class ViewDir {
    private:
        string vdir_x;
        string vdir_y;
        string vdir_z;
    public:
        ViewDir();

        ViewDir(string x, string y, string z);

        string getVdirX();

        void setVdirX(string vdirX);

        string getVdirY();

        void setVdirY(string vdirY);

        string getVdirZ();

        void setVdirZ(string vdirZ);
};


#endif
