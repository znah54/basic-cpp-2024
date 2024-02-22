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
	const int num = 10; // num변수를 상수화 시킨다.
		//num = 100;	// num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int* pnum1;			// 포인터 변수 선언 : 포인터(주소)변수 pnum1 선언  * : 그냥 아무런의미없는 기호
	pnum1 = &num1;		// 변수 num1의 주소를 포인터변수 pnum1에 저장한다.
	
	cout << num << endl;
	cout << num1 << endl;
	cout << &num1 << endl;
	cout << pnum1 << endl;
	cout << *pnum1 << endl; // 가리키는 데이터 가리킴

	return 0;
}