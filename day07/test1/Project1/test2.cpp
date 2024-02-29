#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Myclass {
private:
	char name[20];
	int age;
public:
	strcpy(const char * name);
};

class MyInfo : public Myclass {
private:
	char pNumber[20];
public:
	MyInfo(const char* name, int age)
		: Myclass(const char* pNumber) {

	}
	void printMyInfo(){
		cout << "ÀÌ¸§ : " << endl;

	}
};
int main(void) {
	MyInfo s1("È«±æµ¿", 23, "010-2424-2242");
	s1.printMyInfo();
}