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
		NameCard(const NameCard& nameCard);
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
	cout << "Constructor has been called" << endl;
}

NameCard::NameCard(const NameCard& nameCard) {
	this -> name = new char[strlen(nameCard.name) + 1];
	strcpy(this -> name, nameCard.name);
	this -> company = new char[strlen(nameCard.company) + 1];
	strcpy(this -> company, nameCard.company);
	this -> phone = new char[strlen(nameCard.phone) + 1];
	strcpy(this -> phone, nameCard.phone);
	this -> position = nameCard.position;
	cout << "Copy constructor has been called" << endl;
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
	cout << "Destructor has been called" << endl;
}

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hone", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

	return 0;
}
