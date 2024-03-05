#include<iostream>
using namespace std;
class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void viewPoint() {
		cout << xpos << " " <<ypos<<" "<<endl;
	}
	friend Point operator+(const Point& pos1, const Point& pos2);
};
Point operator+(const Point& pos1, const Point& pos2) {
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}
int main() {
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	c.viewPoint();
	d.viewPoint();
	e.viewPoint();

	/*std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;*/
}