#include <iostream>

void incrementOne(int& num);
void changeSign(int& num);

using namespace std;

int main(void) {
	int num = 10;
	
	cout << num << endl;

	incrementOne(num);
	cout << num << endl;
	changeSign(num);
	cout << num << endl;

	return 0;
}

void incrementOne(int& num) {
	num++;
}

void changeSign(int& num) {
	num = num * -1;
}
