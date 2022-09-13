//
// Created by Maryam Forootaninia on 9/21/19.
//

#include "Helper.h"

void Helper::crossProduct(double * A, double * B, double * C) {
    C[0] = A[1] * B[2] - A[2] * B[1];
    C[1] = A[2] * B[0] - A[0] * B[2];
    C[2] = A[0] * B[1] - A[1] * B[0];
}

void Helper::dotProductScalarByVector(double k, double B[], double C[]) {
    int n = 3;
    for (int i = 0; i < n; i++){
        C[i] =  k*B[i];
    }
}

double Helper::dotProductTwoVectors(double A[], double B[]) {
    double product = 0;
    for (int i = 0; i < 3; i++) {
        product = product + A[i] * B[i];
    }
    return product;
}

Helper::Helper() {

}
