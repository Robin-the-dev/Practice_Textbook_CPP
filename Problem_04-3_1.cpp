#include <iostream>

using namespace std;

class Point {
	private:
		int xPos, yPos;

	public:
		Point(int x, int y) {
			xPos = x;
			yPos = y;
		}

		void ShowPointInfo() const {
			cout << "[" << xPos << ", " << yPos << "]" << endl;
		}
};

class Circle {
	private:
		Point centre;
		int radius;
	
	public:
		Circle(int x, int y, int radius) : centre(x, y) {
			this -> radius = radius;
		}


		void ShowRadius() const {
			cout << "Radius: " << radius << endl;
		}

		void ShowPoint() const {
			centre.ShowPointInfo();
		}
};

class Ring {
	private:
		Circle c1;
		Circle c2;
		
	public:
		Ring(int x1, int y1, int rad1, int x2, int y2, int rad2) 
		: c1(x1, y1, rad1), c2(x2, y2, rad2) {
		}

		void ShowRing() const {
			cout << "Inner Circle Info" << endl;
			c1.ShowRadius();
			c1.ShowPoint();

			cout << "Outer Circle Info" << endl;
			c2.ShowRadius();
			c2.ShowPoint();
		}
};

int main(void) {
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRing();

	return 0;
}
