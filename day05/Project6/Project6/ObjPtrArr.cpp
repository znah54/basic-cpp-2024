#include<iostream>
#include<cstring>
using namespace std;

class Person {
	// ���� ObjArr.cpp�� Person Ŭ������ �����ϹǷ� �����մϴ�.
};
int main(void) {
	Person * parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸� : ";
		cin >> namestr;
		cout << "����:";
		cin >> age;
		parr[i] = new Person (namestr, age);
	}
	parr[0]->ShowPersonInfo();
}