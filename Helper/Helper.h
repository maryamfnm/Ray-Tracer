//
// Created by Maryam Forootaninia on 9/21/19.
//

#ifndef ASSIGNMENT0_HELPER_H
#define ASSIGNMENT0_HELPER_H

#include <vector>
using namespace std;

class Helper {
    public:
        Helper();

        double dotProductTwoVectors(double A[], double B[]);

        void dotProductScalarByVector(double k, double B[], double C[]);

        void crossProduct(double * A, double * B, double * C);

};
#endif
