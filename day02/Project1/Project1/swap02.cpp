#include<iostream>
using namespace std;
/*
	swap�Լ� �����ϱ�
*/
int swap(int *a, int *b) {		// �ּҸ� ���� �� �ִ� �����ͺ����� ����
	int temp = 0;
	temp = *a;					//
	*a = *b;
	*b = temp;
	return 0;
}
int main() {
	
	int a = 10;					//���� ����
	int b = 20;

	cout << "before:" << endl;
	cout << "a:" <<a<< endl;
	cout << "b:" <<b<< endl;

	swap(&a, &b);				// ������ �ּҸ� ����

	cout << "after:" << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	return 0;
	// A && B ��������
	// A & B ��Ʈ������
	int c = 40 // �Ϲ����� ���� ���� 
	int* ptr; // �ּҰ� ����
	int* ptr = &num1;  //������ ��
	int& num3 = num3; // ���� ���� ���� 

}
