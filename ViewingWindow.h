//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_VIEWINGWINDOW_H
#define ASSIGNMENT0_VIEWINGWINDOW_H
#include <string>
#include "SceneVariables/Eye.h"
#include "Vec3.h"

using namespace std;

class ViewingWindow {
    private:
        double view_width;
        double view_height;
        double ul[3];
        double ur[3];
        double ll[3];
        double lr[3];
    public:
        ViewingWindow();
        double getViewHeight();
        double getViewWidth();
        void setViewWidth(double w);
        void setViewHeight(double h);
        float computeWindowHeigth(string verticalFieldOfView, float d);
        float computeWindowWidth(float aspectRatio, float h);
        void calculateViewingWindowCoordinates(Eye eye, double *u, double *v, double n[], float window_h, float window_w, double d);
        Vec3 mapping(int n, int m, float height, float width);
};

#endif
