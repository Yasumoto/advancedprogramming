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

	// Create the array with every number up to n
	for (i = 0; i<n; ++i){
		list_of_primes[i] = 2+i;
	}

	// progress through the array, eliminating each number that is a multiple of a previous prime number
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
int cpsc370math::determinant(int** matrix){
	return matrix[0][0] * matrix[1][1] - (matrix[1][0] * matrix[0][1]);
};

// Takes two vectors of same length (with (x_1, y_1) and (x_2, y_2) coordinates)
double cpsc370math::dot_product(float* vector_1, float* vector_2){
	return vector_1[0] * vector_2[0] + vector_1[1] * vector_1[1];
};

// Takes two matrices and their width/height, width/height
int** cpsc370math::matrix_product(int** matrix, int** matrix_2, const int& width, const int& height, const int& width_2, const int& height_2){
	int** product = new int*[height];
	for(i = 0; i < height; ++i){
		product[i] = new int[width_2];
	}

        int value = 0;

	for(i = 0; i < height; ++i){
		for(j=0; j < width_2; ++j){
			for(k=0; k < width; ++k){
				value = value + (matrix[i][k] * matrix_2[k][j]);
				}
			product[i][j] = value;
			value = 0;
		}
	}
	return product;
};

// Takes 2D matrix of size x,y and computes transpose
int** cpsc370math::transpose(int** matrix, const int& width, const int& height){
	int** m = new int* [height];

	for(int i = 0; i < height; ++i){
		m[i] = new int[width];
	}

	for (int i = 0; i < height; ++i){
		for (int j = 0; j < width; ++j){
			m[i][j] = matrix[j][i];
		}
	}

	return m;
};
