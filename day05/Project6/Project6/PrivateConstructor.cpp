#include<iostream>
#include<cstring>
using namespace std;
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)		// 입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;			// strlen()은 문자열의 길이를 구하는 함수
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이 : " << age << endl;
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
