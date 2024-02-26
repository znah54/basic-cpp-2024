#include<iostream>
#include<cstring>
using namespace std;
class StudentClass {
private:
	int ID;
	char* name;
	char* major;
	int age;
public:
	StudentClass(int id,const char *n, const char *m, int a) {
		ID = id;
		strcpy(name, n);
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
	StudentClass student(151,"dddd","aaaa",1515);
	student.Showmy();
	return 0;
}