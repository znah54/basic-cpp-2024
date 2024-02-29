#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person {
private:
	char * name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void personlnfo() const {
		cout << "이름 : " << name << " 나이:  " << age << endl;
		}
	~Person() {
		cout << "지우기" << endl;
	}
};
//void Person::personlnfo() {}

int main(void) {
	Person p("ㅇㅇㅇ", 30);
	p.personlnfo();

	Person copyp(p);
	copyp.personlnfo();

	return 0;
}