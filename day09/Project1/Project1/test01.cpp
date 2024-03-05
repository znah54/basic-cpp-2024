#include<iostream>
using namespace std;

class Myclass {
	int num;
private:
	int xpos;
public:
	Myclass(int x=0) : xpos(x)
	{}
	void print()
	{
		cout << xpos << " " << endl;
	}
	Myclass operator+(const Myclass& ref)
	{
		Myclass pos(xpos + ref.xpos);
			return pos;
	}

	friend Myclass operator/(const Myclass& other, const Myclass& ref)
	{
		return Myclass(other.num / ref.num);
	}
};
int main() {
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;	// 객체간의 대입
	c.print();

	Myclass d = a + b + c;
	d.print();

	return 0;
}