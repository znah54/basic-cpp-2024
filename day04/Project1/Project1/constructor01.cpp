#include<iostream>
using namespace std;

class MyClass {
	int num;

public:
	MyClass(){				// ������ �����ε�
		cout << "������ ȣ��" << endl;
		num = 10;
	} // default ������

	MyClass(int anum) {		// ������ �����ε�
		cout << "������ ȣ�� : MyClass(int)" << endl;
		num = anum;
	}

	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};
int main() {

	//MyClass* m = new MyClass();
	MyClass m1;					// ��ü���� ������� �����ڴ� �ڵ� ȣ�� �ȴ�.
	m1.MyClassInfo();
	MyClass m2();

	return 0;
}