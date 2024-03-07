#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray {
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len) {
		cout << "������ ȣ��" << endl;
		arr = new int[len];
	}
	int& operator[] (int idx) {
		cout << "������ �Լ� ȣ��" << endl;
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			BoundCheckIntArray::~BoundCheckIntArray();	// ����ó�� �κп� ���������� �Ҹ��ڸ� ȣ��
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete[] arr;
	}
};

int main() {
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;
	for (int i = 0; i < 6; i++)	// �迭�� ũ�⸦ �Ѿ� ���ܰ� ȣ��Ǹ� �Ҹ��ڰ� ȣ���� ���� ����
		cout << arr[i] << endl;

	return 0;
}