#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
};