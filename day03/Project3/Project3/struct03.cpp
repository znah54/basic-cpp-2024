// C++ Ÿ���� ����ü ����� ��� ������ �Լ��� ������.
#include<iostream>
class human {		//�ڷ���
public:
	char name[29];
	int age;
	char job[20];
	void showHuman()		// ��� : ����Լ�
	{
		printf("name : %s age : %d job : %s\n", name, age, job);
	}
}Human;


int main() {
	int a = 10;
	human h1 = { "������",50,"����" };
	h1.showHuman();
}