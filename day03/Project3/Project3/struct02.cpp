// C++ Ÿ���� ����ü ����� ��� ������ �Լ��� ������.
#include<iostream>
typedef struct human {
	char name[29];
	int age;
	char job[20];
	void showHuman(Human h)		// ��� : ����Լ�
	{
		printf("name : %s age : %d job : %s\n", h.name, h.age, h.job);
	}
}Human;


int main() {
	int a = 10;
	human h1 = { "������",50,"����" };
	h1.showHuman();
	return 0;
}