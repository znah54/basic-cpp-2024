#include<iostream>
#include<cstring>
using namespace std;
class StudentClass {
private:
	const int ID;  // 학번 상수화
	char* name;		//문자열 배열을 선언하고 바로 초기화 하지 않는 경우는 strcpy()를 통하여 초기화 한다.
	char* major;
	int age;
public:
	// 문자열은 주소기 때문에 포인터 변수에 넣어서 사용한다. 문자열의 첫번째 문자 주소가 저장된다.
	// 멤버 이니셜랑즈는 객체 생성시 초기화되지않는 멤버들을 초기화할때 사용한다. 즉 객체생성과 상관없이 미리 초기화가 되는지
	StudentClass(int id,const char *n, const char *m, int a) : ID(id) {
		//ID = id;
		strcpy(name, n);			// 문자열배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 된다.
		strcpy(major, m);
		age = a;
	}
	void Showmy() const {
		cout << "이름:" << name << endl;
		cout << "나이:" << age << endl;
		cout << "전공:" << major << endl;
		cout << "학번:" << ID << endl;
	}
};
int main()
{
	StudentClass student(151,"dddd","aaaa",1515);		//객체를 생성하면 생성자를 호출해야 한다.
	student.Showmy();
	return 0;
}