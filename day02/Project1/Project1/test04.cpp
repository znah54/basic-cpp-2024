#include<iostream>
using namespace std;
int main() {

	int num = 10;						// �������� ����� �ʱ�ȭ
	cout << "num:" << num << endl;

	
	int* pnum = &num;					// �ּҷ� num������ ����
	int& rnum = num;					// ������ num������ ����

	num = 20;
	cout << "num:" << num << endl;
	cout << "*pnum:" << *pnum << endl;
	cout << "rnum:" << rnum << endl;

	*pnum = 30;
	cout << "num:" << num << endl;
	cout << "*pnum:" << *pnum << endl;
	cout << "rnum:" << rnum << endl;

	rnum = 40;
	cout << "num:" << num << endl;
	cout << "*pnum:" << *pnum << endl;
	cout << "rnum:" << rnum << endl;

	return 0;
}