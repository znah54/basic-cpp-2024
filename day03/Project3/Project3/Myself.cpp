#include<iostream>
#include<cstring>
using namespace std;
class human{
public:
	char name[20];
	int age;
	char job[20];
private:
	void command() {
	    cin >> name;
		cin >> age;
		cin >> job;
		return;
	}
	void showhuman() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		cout << "���� : " << job << endl;
	}
};
int main() {
	human h1;
	h1.command();
	
	return 0;
}