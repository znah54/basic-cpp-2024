#include<iostream>
using namespace std;
/*namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}
int main(void) {
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}*/

int main() {
	const int num = 10; // num������ ���ȭ ��Ų��.
		//num = 100;	// num�� ����̹Ƿ� ������ �� ����.

	int num1 = 10;
	int* pnum1;			// ������ ���� ���� : ������(�ּ�)���� pnum1 ����  * : �׳� �ƹ����ǹ̾��� ��ȣ
	pnum1 = &num1;		// ���� num1�� �ּҸ� �����ͺ��� pnum1�� �����Ѵ�.
	
	cout << num << endl;
	cout << num1 << endl;
	cout << &num1 << endl;
	cout << pnum1 << endl;
	cout << *pnum1 << endl; // ����Ű�� ������ ����Ŵ

	return 0;
}