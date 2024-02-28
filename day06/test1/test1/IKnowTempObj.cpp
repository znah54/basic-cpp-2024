#include<iostream>
using namespace std;

class Temporary {
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj" << num << endl;
	}
	~Temporary() {
		cout << "destroy obj:" << num << endl;
	}
	void ShowTempInfo() {
		cout << "MY num in" << num << endl;
	}
};