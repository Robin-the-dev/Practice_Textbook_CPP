#include <iostream>
#define MAX_LENGTH 9

int main(void) {
	int n;

	std::cout << "Enter the number: ";
	std::cin >> n;

	for(int i = 0; i < MAX_LENGTH; i++) {
		std::cout << n << " X " << i + 1 << " = " << n * (i + 1) << std::endl;
	}

	return 0;
}
