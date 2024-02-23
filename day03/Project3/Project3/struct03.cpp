// C++ 타입의 구조체 멤버로 멤버 변수와 함수를 가진다.
#include<iostream>
class human {		//자료형
public:
	char name[29];
	int age;
	char job[20];
	void showHuman()		// 기능 : 멤버함수
	{
		printf("name : %s age : %d job : %s\n", name, age, job);
	}
}Human;


int main() {
	int a = 10;
	human h1 = { "ㄱㄱㄱ",50,"ㄴㄴ" };
	h1.showHuman();
}