#include "primes.h"
#include <iostream>

int main() {
	int primeCount = 0;

	std::cout << "Number of primes to generate: ";
	std::cin >> primeCount;

	int* primeArray = new int[primeCount];

	primeGenerator(primeCount, primeArray);
	for (int i = 0; i < primeCount; i++) {
		std::cout << primeArray[i] << std::endl;
	}

	delete[] primeArray;

	return 0;
}