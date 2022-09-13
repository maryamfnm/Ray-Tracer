//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_EYE_H
#define ASSIGNMENT0_EYE_H
#include <string>
using namespace std;

class Eye {
    private:
        string eye_x;
        string eye_y;
        string eye_z;
    public:
        Eye();
        Eye(string x, string y, string z);
        string getEyeX();
        string getEyeY();
        string getEyeZ();
        void setEyeX(string x);
        void setEyeY(string y);
        void setEyeZ(string z);
};
#endif
