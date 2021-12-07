#include "Calculator.h"
#include <iostream>

int main() {
	Calculator calc = Calculator();
	
	std::cout << "1 + 2 = " << calc.calculate(1, '+', 2) << std::endl;
	std::cout << "1 - 2 = " << calc.calculate(1, '-', 2) << std::endl;
	std::cout << "1 * 2 = " << calc.calculate(1, '*', 2) << std::endl;
	std::cout << "1 / 2 = " << calc.calculate(1, '/', 2) << std::endl;


	try {
		std::cout << "1 / 0 = ";
		std::cout << calc.calculate(1, '/', 0) << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << "1 : 2 = ";
		std::cout << calc.calculate(1, ':', 2) << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}