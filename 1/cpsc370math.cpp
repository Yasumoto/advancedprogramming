#include "cpsc370math.h"

cpsc370math::cpsc370math(){
};

// Takes n, returns n!
int cpsc370math::factorial(int n){
	if (n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
};

// Takes x and y, returns their greatest common divisor
int cpsc370math::gcd(int x, int y){
	return 1;
};

// Takes n, returns an array with all prime numbers less than n
int* cpsc370math::prime(int n){
	return &n;
};

// Takes a square matrix n (array of arrays) and the size
int cpsc370math::determinant(int** matrix, int size){
	return 1;
};

// Takes two vectors of same length (with (x_1, y_1) and (x_2, y_2) coordinates)
double cpsc370math::dot_product(float* vector_1, float* vector_2){
	return 0.0;
};

// Takes two matrices and their width/height, width/height
int** cpsc370math::matrix_product(int** matrix, int** matrix_2, int width, int height, int width_2, int height_2){
	return matrix;
};

// Takes 2D matrix of size x,y and computes transpose
int** cpsc370math::transpose(int** matrix, int width, int height){
	return matrix;
};
