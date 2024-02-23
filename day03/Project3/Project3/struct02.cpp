// C++ 타입의 구조체 멤버로 멤버 변수와 함수를 가진다.
#include<iostream>
typedef struct human {
	char name[29];
	int age;
	char job[20];
	void showHuman(Human h)		// 기능 : 멤버함수
	{
		printf("name : %s age : %d job : %s\n", h.name, h.age, h.job);
	}
}Human;


int main() {
	int a = 10;
	human h1 = { "ㄱㄱㄱ",50,"ㄴㄴ" };
	h1.showHuman();
	return 0;
}