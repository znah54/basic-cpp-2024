#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Gun {
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot() {
		cout << "BBANG!" << endl;
		bullet--;
	}
	void state() {
		cout << bullet << " " << endl;
		bullet--;
		cout <<bullet<< " " << endl;
	}
};
class Police :public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff)
		: Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff() {
		cout << "SNAP!" << endl;
		handcuffs--;
	}
};

int main(void) {
	Police pman(5, 3);
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();
	return 0;
}