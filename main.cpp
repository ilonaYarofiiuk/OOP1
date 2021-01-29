#include <iostream>

using namespace std;

class Point {
	private:
		int x;
		int y;
	public:
		Point() {};
		Point(int x, int y) { this->x = x; this->y = y; }
		void setX(int val) { x = val; };
		void setY(int val) { y = val; };
		int getY() { return y; };
		int getX() { return x; };
		void print();
};


void Point::print() {
	cout << "Point: (" << x << ", " << y << ")" << endl;
}

int main() {
	Point a(1, 2);
	a.print();
	a.setX(10);
	a.setY(20);
	a.print();
	return 0;
}