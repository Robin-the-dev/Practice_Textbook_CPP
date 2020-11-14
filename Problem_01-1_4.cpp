#include <iostream>

int main(void) {
	double sales = 0;
	double salary = 0;

	while(sales != -1) {
		std::cout << "Enter the sales (-1 to exit): ";
		std::cin >> sales;

		salary = 50 + (sales * 0.12);
		std::cout << "The salary: " << salary << std::endl;
	}

	std::cout << "Exit" << std::endl;

	return 0;
}
