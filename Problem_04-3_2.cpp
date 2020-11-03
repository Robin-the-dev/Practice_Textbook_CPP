#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS {
	enum {
		CLERK, SENIOR, ASSIST, MANAGER
	};

	void ShowPosition(int pos) {
		switch(pos) {
			case CLERK:
				cout << "Clerk" << endl;
				break;
			case SENIOR:
				cout << "Senior" << endl;
				break;
			case ASSIST:
				cout << "Assist" << endl;
				break;
			case MANAGER:
				cout << "Manager" << endl;
				break;
		}
	}
}

class NameCard {
	private:
		char* name;
		char* company;
		char* phone;
		int position;
	public:
		NameCard(const char* name, const char* company, const char* phone, int position);
		void ShowNameCardInfo() const;
		~NameCard();
};

NameCard::NameCard(const char* name, const char* company, const char* phone, int position) {
	this -> name = new char[strlen(name) + 1];
	strcpy(this -> name, name);
	this -> company = new char[strlen(company) + 1];
	strcpy(this -> company, company);
	this -> phone = new char[strlen(phone) + 1];
	strcpy(this -> phone, phone);
	this -> position = position;
}

void NameCard::ShowNameCardInfo() const {
	cout << "Name: " << name << endl;
	cout << "Company: " << company << endl;
	cout << "Phone: " << phone << endl;
	cout << "Position: ";
	COMP_POS::ShowPosition(position);

	/*
	if(position == COMP_POS::CLERK)
		cout << "Clerk" << endl;
	else if(position == COMP_POS::SENIOR)
		cout << "Senior" << endl;
	else if(position == COMP_POS::ASSIST)
		cout << "Assist" << endl;
	else
		cout << "Manager" << endl;
	*/

	cout << endl;
}

NameCard::~NameCard() {
	delete []name;
	delete []company;
	delete []phone;
}

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
