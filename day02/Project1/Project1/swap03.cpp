#include<iostream>
using namespace std;
int swap(int& a, int& b) {		
	int temp = a;					
	a = b;
	b = temp;
	return 0;
}
int main() {

	int a = 10;					
	int b = 20;

	cout << "before:" << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	swap(a, b);				

	cout << "after:" << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	return 0;
}