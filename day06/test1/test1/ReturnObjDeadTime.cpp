#include<iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object:" << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "New Copy obj:" << this << endl;
	}
	~SoSimple() {
		cout << "Destory obj:" << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "Parm ADR:" << &ob << endl;
	return ob;
}
int main(void) {
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj" << &tempRef << endl;
	return 0;
}

/*
New Object:000000CFC27EF994			按眉 obj林家
New Copy obj:000000CFC27EFA94		按眉 obj林家
Parm ADR:000000CFC27EFA94			按眉 ob林家
New Copy obj:000000CFC27EFAD4		烙矫按眉 林家
Destory obj:000000CFC27EFA94		按眉 ob 家戈
Destory obj:000000CFC27EFAD4		烙矫按眉 家戈

New Copy obj:000000CFC27EFAF4		按眉 ob林家
Parm ADR:000000CFC27EFAF4			按眉 ob林家
New Copy obj:000000CFC27EF9B4		烙矫按眉
Destory obj:000000CFC27EFAF4		按眉 ob家戈
Return Obj000000CFC27EF9B4			烙矫按眉 林家
Destory obj:000000CFC27EF9B4		烙矫按眉 家戈
Destory obj:000000CFC27EF994		按眉 obj家戈
*/