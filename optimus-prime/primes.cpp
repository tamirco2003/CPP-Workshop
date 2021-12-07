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