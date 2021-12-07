#include "primes.h"

#include <cmath>

bool isPrime(int num) {
	for (int i = 2; i <= std::sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}