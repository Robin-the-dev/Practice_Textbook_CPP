#include <iostream>
#include <cstring>

using namespace std;

namespace PNT_CONST {
	enum {
		MAX_LENGTH = 50
	};
}

class Printer {
private:
	char string[PNT_CONST::MAX_LENGTH];
public:
	void SetString(const char* str);
	void ShowString();
};

void Printer::SetString(const char* str) {
	strcpy(string, str);
}

void Printer::ShowString() {
	cout << string << endl;
}

int main(void) {
	Printer pnt;

	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}
