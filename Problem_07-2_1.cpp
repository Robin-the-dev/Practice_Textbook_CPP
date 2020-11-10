#include <iostream>

using namespace std;

class Rectangle {
	private:
		int width;
		int height;
	public:
		Rectangle(int width, int height) {
			this -> width = width;
			this -> height = height;
		}

		int GetArea() {
			return width * height;
		}

		void ShowAreaInfo() {
			cout << "Area: " << GetArea() << endl;
		}
};

class Square : public Rectangle {
	public:
		Square(int side) : Rectangle(side, side) {
			// empty
		}
};

int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	return 0;
}
