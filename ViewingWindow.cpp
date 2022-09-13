//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "ViewingWindow.h"
#include "Helper/Helper.h"
#include <math.h>
#include <string>
using namespace std;

ViewingWindow::ViewingWindow() {

}

void ViewingWindow::setViewHeight(double h) {
    this->view_height = h;

}

void ViewingWindow::setViewWidth(double w) {
    this->view_width = w;
}

double ViewingWindow::getViewWidth() {
    return this->view_width;
}

double ViewingWindow::getViewHeight() {
    return this->view_height;
}

float ViewingWindow::computeWindowHeigth(string verticalFieldOfView, float d) {
    float h;
    h = 2*d*tan(stoi(verticalFieldOfView)/2);
    return h;
}

float ViewingWindow::computeWindowWidth(float aspectRatio, float h) {
    float w;
    w = h*aspectRatio;
    return w;
}

void ViewingWindow::calculateViewingWindowCoordinates(Eye eye, double *u, double *v, double n[], float window_h, float window_w, double d) {

    auto helper = new Helper();
    double eye_coordinates[] = {std::stod(eye.getEyeX()), std::stod(eye.getEyeY()), std::stod(eye.getEyeZ())};
    double result_1[3];
    helper->dotProductScalarByVector(d, n, result_1);

    double result_2[3];
    helper->dotProductScalarByVector((window_w / 2), u, result_2);

    double result_3[3];
    helper->dotProductScalarByVector((window_h / 2), v, result_3);


    for (int i = 0; i<= 2; i++) {
        this->ul[i] = eye_coordinates[i] + result_1[i] -  result_2[i] + result_3[i] ;
        this->ur[i] = eye_coordinates[i] + result_1[i] +  result_2[i] + result_3[i] ;
        this->ll[i] = eye_coordinates[i] + result_1[i] -  result_2[i] - result_3[i] ;
        this->lr[i] = eye_coordinates[i] + result_1[i] +  result_2[i] - result_3[i] ;
    }


}

//double * ViewingWindow::mapping(int n, int m, float height, float width) {
Vec3 ViewingWindow::mapping(int n, int m, float height, float width) {
    double A[3];
    double B[3];
    for (int i=0; i<=2; i++) {
       A[i] = this->ur[i] - this->ul[i];
       B[i] = this->ll[i] - this->ul[i];
    }

    double delta_h[3];
    double delta_v[3];
    for (int j=0; j<=2; j++) {
        delta_h[j] = A[j]/width;
        delta_v[j] = B[j]/height;
    }
    auto helper = new Helper();
    double delta_c_h[3];
    helper->dotProductScalarByVector(0.5, delta_h, delta_c_h);

    double delta_c_v[3];
    helper->dotProductScalarByVector(0.5, delta_v,delta_c_v);

    double delta_h_result[3];
    helper->dotProductScalarByVector(m, delta_h,delta_h_result);

    double delta_v_result[3];
    helper->dotProductScalarByVector(n, delta_v,delta_v_result);

    Vec3 correspondence;

   // for(int k=0; k<=2; k++) {
   correspondence.a = this->ul[0] + delta_h_result[0] + delta_v_result[0] + delta_c_h[0] + delta_c_v[0];

   correspondence.b = this->ul[1] + delta_h_result[1] + delta_v_result[1] + delta_c_h[1] + delta_c_v[1];
   correspondence.c = this->ul[2] + delta_h_result[2] + delta_v_result[2] + delta_c_h[2] + delta_c_v[2];

   // }

    //double *p;
    //p = correspondence;
    return correspondence;
}






