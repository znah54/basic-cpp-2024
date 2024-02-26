#include<iostream>
using namespace std;

class MyClass {
	int num;

public:
	MyClass(){				// 생성자 오버로딩
		cout << "생성자 호출" << endl;
		num = 10;
	} // default 생성자

	MyClass(int anum) {		// 생성자 오버로딩
		cout << "생성자 호출 : MyClass(int)" << endl;
		num = anum;
	}

	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};
int main() {

	//MyClass* m = new MyClass();
	MyClass m1;					// 객체생성 명령으로 생성자는 자동 호출 된다.
	m1.MyClassInfo();
	MyClass m2();

	return 0;
}