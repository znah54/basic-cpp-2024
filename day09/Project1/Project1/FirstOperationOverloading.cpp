#include<iostream>
using namespace std;
class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)	// 디폴트값 초기화 
	{}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator+(const Point& ref)	//operator+라는 이름의 함수
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);	//객체생성 
		return pos;
	}
};	// + 는 기본 자료형을 더하는 것,

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	Point pos4 = pos2.operator+(pos3);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}