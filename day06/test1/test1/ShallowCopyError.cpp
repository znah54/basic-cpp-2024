#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& other) {	//복사생성자
		cout << "깊은 복사생성자 호출" << endl;
		//this->name = other.name;
		//this->age = other.age;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->age = other.age;
	}								// 멤버대 멤버복사
	void ShowPersonInfo() const
	{
		cout << "이름 :" << name << endl;
		cout << "나이:" << age << endl;
	}
	~Person() {
		//delete[]name;
		cout << "called destuctor" << endl;
	}
};
int main(void) {
	Person man1("ggg", 20);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}