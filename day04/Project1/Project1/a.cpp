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
		cout << "�̸�:" << name << endl;
		cout << "����:" << age << endl;
		cout << "����:" << major << endl;
		cout << "�й�:" << ID << endl;
	}
};
int main()
{
	StudentClass student(151,"dddd","aaaa",1515);
	student.Showmy();
	return 0;
}