#include <iostream>

using namespace std;

class Base
{
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1()" << endl; }
	virtual void func2() { cout << "Base::func2()" << endl; }
	void func3() { cout << "Base::func3()" << endl; }
};

class Derived : public Base
{
public:
	void func1() { cout << "Derived::func1()" << endl; }
	void func3() { cout << "Derived::func2()" << endl; }
	void func4() { cout << "Derived::func3()" << endl; }

	Derived() = default;
};

int main()
{
	Base b; // Base Ÿ���� ��ü����
	Derived d;
	Base* pb = new Derived(); // Base Ÿ���� ��ü ������

	pb->func1();
	pb->func2();
	pb->func3();

	delete pb;

	return 0;
}