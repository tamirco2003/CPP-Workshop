#include "primes.h"

#include <cmath>

bool isPrime(int num) {
	double numRoot = std::sqrt(num);

	for (int i = 2; i <= numRoot; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

void primeGenerator(int primeCount, int primeArray[]) {
	int primeIndex = 0;

	for (int i = 2; primeIndex < primeCount; i++) {
		if (isPrime(i)) {
			primeArray[primeIndex] = i;
			primeIndex++;
		}
	}
}