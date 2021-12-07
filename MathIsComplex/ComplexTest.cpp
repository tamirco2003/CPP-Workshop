#include "Complex.h"
#include <iostream>

int main() {
	Complex z1 = Complex();
	// "0 + 0i"
	z1.printNumber();
	Complex z2 = Complex(3.14, -5);
	// "3.14 + -5i"
	z2.printNumber();
	Complex z3 = Complex(3.14, 5);
	// "3.14 + 5i"
	z3.printNumber();

	// Should print 0.
	std::cout << (z1 == z2) << std::endl;
	// Should print 0.
	std::cout << (z2 == z3) << std::endl;
	
	z3.setImaginary(-5);
	// Should print 1.
	std::cout << (z2 == z3) << std::endl;

	z3.setReal(-3.14);
	z3.setImaginary(10);

	// "0 + 5i"
	(z2 + z3).printNumber();
	// "6.28 + -15i"
	(z2 - z3).printNumber();
	// "40.1404 + 47.1i"
	(z2 * z3).printNumber();

	return 0;
}