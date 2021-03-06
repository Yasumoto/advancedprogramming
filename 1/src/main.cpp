#include "cpsc370math.h"

int main(int argc, char** argv){
	cpsc370math math;

	while ( 1 ) {
	cout << "Welcome to the calculator of awesomeness!" << endl;
	cout << "Please enter a number to make your suggestion: " << endl;
	cout << "1. Factorial" << endl;
	cout << "2. GCD" << endl;
	cout << "3. Prime" << endl;
	cout << "4. Determinant" << endl;
	cout << "5. Dot Product" << endl;
	cout << "6. Matrix Product" << endl;
	cout << "7. Transpose" << endl;
	cout << "8. Quit" << endl;

	int num;
	int n, x, y;
	int result;

	cin >> num;

	if (num == 1){
		cout << "Enter an int n" << endl;
		cin >> n;
		result = math.factorial(n);
		cout << result << endl;
	}

	if (num == 2){
		cout << "Enter int x, followed by int y" << endl;
		cin >> x;
		cin >> y;
		result = math.gcd (x, y);
		cout << result << endl;
	}
	
	if (num == 3){
		cout << "Enter an int n" << endl;
		cin >> n;
	// Primes
	int* primes = math.prime(n);

	int i = 0;

	while(primes[i] != 4){
		if(primes[i] != 0){
			cout <<  primes[i] << endl;
		}
		++i;
	}
	}

	if (num == 4){
		int ** mat = new int*[2];
		mat[0] = new int[2];
		mat[1] = new int[2];

		cout << "Enter your four int's (hitting enter after each)" << endl;

		cin >> mat[0][0];
		cin >> mat[0][1];
		cin >> mat[1][0];
		cin >> mat[1][1];

		result = math.determinant(mat);
		cout << result << endl;
	}

	if (num == 5){
		float mat_1[2];
		float mat_2[2];

		cout << "Enter your four float's (hitting enter after each)" << endl;

		cin >> mat_1[0];
		cin >> mat_1[1];
		cin >> mat_2[0];
		cin >> mat_2[1];

		result = math.dot_product(mat_1, mat_2);
		cout << result << endl;
	}


	if (num == 6){
		cout << "You said to make it easy on you, so I have implemented an example for you in code" << endl;
	// Matrix Multiplication
	int** matrix = new int*[2];
	for (int i = 0; i < 2; ++i){
		matrix[i] = new int[3];
	}
	matrix[0][0] = 1; 
	matrix[0][1] = 0;
	matrix[0][2] = -2;
	matrix[1][0] = 0;
        matrix[1][1] = 3;
	matrix[1][2] = -1;

	int** matrix_2 = new int*[3];
	for (int i = 0; i < 3; ++i){
		matrix_2[i] = new int[2];
	}

	matrix_2[0][0] = 0;
	matrix_2[0][1] = 3;
	matrix_2[1][0] = -2;
	matrix_2[1][1] = -1;
	matrix_2[2][0] = 0;
	matrix_2[2][1] = 4;

	int** product = math.matrix_product(matrix, matrix_2, 3, 2, 2, 3);

	int zero_zero = product[0][0];
	int zero_one = product[0][1];
        int one_zero = product[1][0];
	int one_one = product[1][1];

	cout << zero_zero;
	cout << " ";
	cout << zero_one << endl;
        
	cout << one_zero;
	cout << " ";
	cout << one_one << endl;
	}

	if (num == 7){
		cout << "You said to make it easy on you, so I have implemented an example for you in code" << endl;
	int** matrix_t = new int*[2];
	for (int i = 0; i < 2; ++i){
		matrix_t[i] = new int[4];
	}
	matrix_t[0][0] = 0; 
	matrix_t[0][1] = 1;
	matrix_t[0][2] = 2;
	matrix_t[0][3] = 3;
	matrix_t[1][0] = 4;
        matrix_t[1][1] = 5;
	matrix_t[1][2] = 6;
	matrix_t[1][3] = 7;

	int** matrix_transposed = math.transpose(matrix_t, 2,4);

	int zero_zero = matrix_transposed[0][0];
	int zero_one = matrix_transposed[0][1];
        int one_zero = matrix_transposed[1][0];
	int one_one = matrix_transposed[1][1];
        int two_zero = matrix_transposed[2][0];
	int two_one = matrix_transposed[2][1];
        int three_zero = matrix_transposed[3][0];
	int three_one = matrix_transposed[3][1];

	cout << zero_zero;
	cout << " ";
	cout << zero_one << endl;
        
	cout << one_zero;
	cout << " ";
	cout << one_one << endl;

	cout << two_zero;
	cout << " ";
	cout << two_one << endl;

	cout << three_zero;
	cout << " ";
	cout << three_one << endl;
	}

	if (num == 8){
		return 0;
	}

	}
}
