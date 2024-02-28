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
New Object:000000CFC27EF994			��ü obj�ּ�
New Copy obj:000000CFC27EFA94		��ü obj�ּ�
Parm ADR:000000CFC27EFA94			��ü ob�ּ�
New Copy obj:000000CFC27EFAD4		�ӽð�ü �ּ�
Destory obj:000000CFC27EFA94		��ü ob �Ҹ�
Destory obj:000000CFC27EFAD4		�ӽð�ü �Ҹ�

New Copy obj:000000CFC27EFAF4		��ü ob�ּ�
Parm ADR:000000CFC27EFAF4			��ü ob�ּ�
New Copy obj:000000CFC27EF9B4		�ӽð�ü
Destory obj:000000CFC27EFAF4		��ü ob�Ҹ�
Return Obj000000CFC27EF9B4			�ӽð�ü �ּ�
Destory obj:000000CFC27EF9B4		�ӽð�ü �Ҹ�
Destory obj:000000CFC27EF994		��ü obj�Ҹ�
*/