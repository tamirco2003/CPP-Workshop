#include "primes.h"
#include <iostream>

int main() {
	for (int i = 2; i < 100; i++) {
		if (isPrime(i)) {
			std::cout << i << " is prime." << std::endl;
		}
	}

	return 0;
}