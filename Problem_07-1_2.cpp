#include <iostream>
#include <cstring>

using namespace std;

class MyFriendInfo {
	private:
		char* name;
		int age;
	public:
		MyFriendInfo(const char* name, int age) : age(age) {
			this -> name = new char[strlen(name) + 1];
			strcpy(this -> name, name);
			cout << "Called MyFriendInfo()" << endl;
		}
		void ShowMyFriendInfo() {
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
		~MyFriendInfo() {
			delete []name;
			cout << "Called ~MyFriendInfo()" << endl;
		}
};

class MyFriendDetailInfo : public MyFriendInfo {
	private:
		char* addr;
		char* phone;
	public:
		MyFriendDetailInfo(const char* name, int age, const char* addr, const char* phone) : MyFriendInfo(name, age) {
			this -> addr = new char[strlen(addr) + 1];
			this -> phone = new char[strlen(phone) + 1];
			strcpy(this -> addr, addr);
			strcpy(this -> phone, phone);
			cout << "Called MyFriendDetailInfo()" << endl;
		}
		void ShowMyFriendDetailInfo() {
			ShowMyFriendInfo();
			cout << "Address: " << addr << endl;
			cout << "Phone: " << phone << endl;
		}
		~MyFriendDetailInfo() {
			delete []addr;
			delete []phone;
			cout << "Called ~MyFriendDetailInfo()" << endl;
		}
};

int main(void) {
	// MyFriendDetailInfo* detail = new MyFriendDetailInfo("Robin", 26, "Dalseogu", "01012341234");
	
	MyFriendDetailInfo detail("Robin", 26, "Dalseogu", "01012341234");

	detail.ShowMyFriendDetailInfo();

	// delete detail;

	return 0;
}
