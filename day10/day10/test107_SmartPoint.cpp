#include <iostream>
using namespace std;

class MyClass {
	int* ptr;
public:
	MyClass(int p) : ptr(new int[100]) {
		cout << "������ ȣ��" << endl;
	}
	~MyClass() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete[] ptr;
	}
};

int main() {
	MyClass* m1 = new MyClass(10);	// �Ҹ��ڰ� ȣ���� �ȵ�
	unique_ptr<MyClass> m2(new MyClass(20));	// �Ҹ��ڱ��� ȣ���(unique_ptr : �̹� ���ǵ� ����Ʈ ������)

	return 0;
}