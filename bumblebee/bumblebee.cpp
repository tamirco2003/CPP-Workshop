#include "primes.h"
#include <iostream>

int main() {
	const int PRIME_COUNT = 100;
	int primeArray[PRIME_COUNT];

	primeGenerator(PRIME_COUNT, primeArray);
	for (int i = 0; i < PRIME_COUNT; i++) {
		std::cout << primeArray[i] << std::endl;
	}

	return 0;
}