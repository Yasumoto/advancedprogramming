#include "cpsc370math.h"

cpsc370math::cpsc370math(){
};

// Takes n, returns n!
int cpsc370math::factorial(const int& n){
	if (n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
};

// Takes x and y, returns their greatest common divisor
int cpsc370math::gcd(const int &x, const int &y){
	if (y == 0){
		return x;
	}
	else {
		return cpsc370math::gcd(y, x % y);
	}
};

// Takes n, returns an array with all prime numbers less than n
int* cpsc370math::prime(const int &n){
	int i, j;

	int* list_of_primes = new int[n];

	for (i = 0; i<n; ++i){
		list_of_primes[i] = 2+i;
	}

	for (i = 2; i<n; ++i){
		for (j = 0; j < n; ++j){
			if (j != 0){
				if(list_of_primes[i+j-2] % i == 0){
					list_of_primes[i+j-2] = 0;
				}
			}
		}
	}

	list_of_primes[i+j-2] = 4;

	return list_of_primes;
};

// Takes a square matrix n (array of arrays) and the size
// Assume a 2x2 matrix
int cpsc370math::determinant(int** matrix, const int& size){
	return 1;
};

// Takes two vectors of same length (with (x_1, y_1) and (x_2, y_2) coordinates)
double cpsc370math::dot_product(float* vector_1, float* vector_2){
	return 0.0;
};

// Takes two matrices and their width/height, width/height
int** cpsc370math::matrix_product(int** matrix, int** matrix_2, const int& width, const int& height, const int& width_2, const int& height_2){
	return matrix;
};

// Takes 2D matrix of size x,y and computes transpose
int** cpsc370math::transpose(int** matrix, const int& width, const int& height){
	return matrix;
};
