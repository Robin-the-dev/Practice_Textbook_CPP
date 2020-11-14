#include <iostream>

void swapPointer(int* (&pref1), int* (&pref2));

using namespace std;

int main(void) {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << ' ' << *ptr2 << endl;

	swapPointer(ptr1, ptr2);

	cout << *ptr1 << ' ' << *ptr2 << endl;

	return 0;
}

void swapPointer(int* (&pref1), int* (&pref2)) {
	int* temp;

	temp = pref1;
	pref1 = pref2;
	pref2 = temp;
}
