#include <iostream>

typedef struct __Point {
	int xPos;
	int yPos;
} Point;

Point& pntAdder(const Point& p1, cont Point& p2);

using namespace std;

int main(void) {
	Point* point = new Point;

	point -> xPos = 10;
	point -> yPos = 20;

	return 0;
}

Point& pntAdder(const Point& p1, cont Point& p2) {
	
}

