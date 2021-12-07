#include <iostream>

int main() {
	const int HEIGHT = 11;
	const int WIDTH = 11;

	std::cout << "The greatest multiplication table this world has ever seen:" << std::endl;

	for (int y = 1; y <= HEIGHT; y++) {
		for (int x = 1; x <= WIDTH; x++) {
			std::cout << x * y << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}