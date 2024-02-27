#include<iostream>
#include<cstring>
using namespace std;
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)		// �Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;			// strlen()�� ���ڿ��� ���̸� ���ϴ� �Լ�
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
	int main(void) {
		Person man1("l", 22);
		Person man2("D", 44);
		man1.ShowPersonInfo();
		man2.ShowPersonInfo();
		return 0;
	}
};
