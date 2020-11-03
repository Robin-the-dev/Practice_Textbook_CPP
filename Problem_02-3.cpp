#include <iostream>

typedef struct __Point {
	int xPos;
	int yPos;
} Point;

Point& pntAdder(const Point& p1, const Point& p2);

using namespace std;

int main(void) {
	Point* p1 = new Point;
	Point* p2 = new Point;

	p1 -> xPos = 10;
	p1 -> yPos = 20;
	p2 -> xPos = 30;
	p2 -> yPos = 40;

	Point& pntAdded = pntAdder(*p1, *p2);

	cout << pntAdded.xPos << ' ' << pntAdded.yPos << endl;

	delete p1;
	delete p2;
	delete &pntAdded;

	return 0;
}

Point& pntAdder(const Point& p1, const Point& p2) {
	Point* pnt = new Point;

	pnt -> xPos = p1.xPos + p1.yPos;
	pnt -> yPos = p2.xPos + p2.yPos;

	return *pnt;
}

