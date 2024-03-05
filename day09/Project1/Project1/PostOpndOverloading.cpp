#include<iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator++()	//�������� -> �����ϰ� �����ش�.
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point operator++(int)	//�������� -> �����ְ� ����
	{	// 1.������ ��ü�� �����Ͽ� ������ �Ӽ����� 
		const Point retobj(xpos, ypos);	//const Point retobj(*this)
		// 2.���� ��ü�� �Ӽ����� 1�� ������Ų��.
		xpos += 1;
		ypos += 1;
		// 3.���� ������ ������ ��ü�� �����Ѵ�.
		return retobj;
	}
	friend Point& operator--(Point& ref);
	friend const Point operator --(Point& ref, int);
};

Point& operator--(Point& ref)	//��������
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point& ref, int)	//��������
{
	const Point retobj;
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}
int main(void) {
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();
	return 0;
}