#ifndef CPSC370MATH_H
#define CPSC370MATH_H

#include<iostream>
#include<string>

using namespace std

class cpsc370math {
    public:
    cpsc370math();

    // Takes n, returns n!
    int factorial(int);

    // Takes x and y, returns their greatest common divisor
    int gcd(int, int);

    // Takes n, returns an array with all prime numbers less than n
    int* prime(int);

    // Takes a square matrix n (array of arrays) and the size
    int determinant(int**, int);

    // Takes two vectors of same length (with (x_1, y_1) and (x_2, y_2) coordinates)
    double dot_product(float*, float*);

    // Takes two matrices and their width/height, width/height
    int** matrix_product(int**, int**, int, int, int, int);

    // Takes 2D matrix of size x,y and computes transpose
    int** transpose(int**, int, int);
    
    private:
    int n, x, y, size, width_1, height_1, width_2, heigh_2;

    int** matrix, matrix_2;
    float* vector_1, vector_2;

};

#endif
