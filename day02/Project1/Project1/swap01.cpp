#include<iostream>
using namespace std;
int main() {
	int c = 0;
	int a = 10;
	int b = 20;
	
	cout << "�ٲٱ� �� " << endl;
	cout << "a" << a << endl;
	cout << "b" << b << endl;

	c = a;
	a = b;
	b = c;

	cout << "a" << a << endl;
	cout << "b" << b << endl;


	return 0;
}