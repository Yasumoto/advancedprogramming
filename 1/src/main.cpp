#include "cpsc370math.h"

int main(int argc, char** argv){
	cpsc370math math;
	int* primes = math.prime(50);

	int i = 0;

	while(primes[i] != 4){
		if(primes[i] != 0){
			cout <<  primes[i] << endl;
		}
		++i;
	}


	return 0;
}
