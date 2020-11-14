#include <iostream>
#define MAX_LENGTH 20

int main(void) {
	char name[MAX_LENGTH];
	char phoneNumber[MAX_LENGTH];

	std::cout << "Enter the name: ";
	std::cin >> name;

	std::cout << "Enter the Phone number: ";
	std::cin >> phoneNumber;

	std::cout << "Your name is " << name << std::endl;
	std::cout << "Your phone number is " << phoneNumber << std::endl;

	return 0;
}
