#include <iostream>
#include <cstring>

using namespace std;

class Book {
	private:
		char* title;
		char* isbn;
		int price;
	public:
		Book(const char* title, const char* isbn, int price) : price(price) {
			this -> title = new char[strlen(title) + 1];
			this -> isbn = new char[strlen(isbn) + 1];
			strcpy(this -> title, title);
			strcpy(this -> isbn, isbn);
		}

		void ShowBookInfo() {
			cout << "Title: " << title << endl;
			cout << "ISBN: " << isbn << endl;
			cout << "Price: " << price << endl;
		}

		~Book() {
			delete []title;
			delete []isbn;
		}
};

class EBook : public Book {
	private:
		char* DRMKey;
	public:
		EBook(const char* title, const char* isbn, int price, const char* DRMKey) : Book(title, isbn, price) {
			this -> DRMKey = new char[strlen(DRMKey) + 1];
			strcpy(this -> DRMKey, DRMKey);
		}

		void ShowEBookInfo() {
			ShowBookInfo();
			cout << "DRM Key: " << DRMKey << endl;
		}

		~EBook() {
			delete []DRMKey;
		}
};

int main(void) {
	Book book("Learning C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();

	cout << endl;

	EBook ebook("Learning C++", "555-12345-890-0", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	return 0;
}
