#include <iostream>
#include <cstring>

#define MAX_LENGTH 50

int main(void) {
	char name1[MAX_LENGTH];
	char name2[MAX_LENGTH];

	std::cout << "Type the name1: ";
	std::cin >> name1;

	std::cout << "Type the name2: ";
	std::cin >> name2;

	std::cout << "Length of name1: " << std::strlen(name1) << std::endl;
	std::cout << "Length of name2: " << std::strlen(name2) << std::endl;
	
	std::strcat(name1, " Me!!!");
	std::strcat(name2, " You!!!");

	std::cout << name1 << std::endl;
	std::cout << name2 << std::endl;

	char name1Copy[MAX_LENGTH];
	char name2Copy[MAX_LENGTH];

	std::strcpy(name1Copy, name1);
	std::strcpy(name2Copy, name2);

	std::cout << name1Copy << std::endl;
	std::cout << name2Copy << std::endl;

	if(std::strcmp(name1, name1Copy) == 0)
		std::cout << "name1 and name1Copy is same" << std::endl;
	else 
		std::cout << "name1 and name1Copy is different" << std::endl;

	if(std::strcmp(name2, name2Copy) == 0)
		std::cout << "name2 and name2Copy is same" << std::endl;
	else
		std::cout << "name2 and name2Copy is different" << std::endl;

	return 0;
}
