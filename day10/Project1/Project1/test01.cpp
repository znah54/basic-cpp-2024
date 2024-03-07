#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Grade {
private:
	char * name;
	int kr, math, eng;
public:
	void SetGradeInfo(char* myname, int mykr, int mymath, int myeng) {
		this->name = new char[strlen(name) + 1];
		this->kr = kr;
		this->eng = eng;
		this->math = math;
	}
	/*Grade operator+(const Grade& pos) const {
		return Grade(name, kr + pos.kr, math + pos.math, eng + pos.eng);
	}*/
	void ShowGradeInfo() const {
		cout << name << " = [����:" << kr << ", ���� : " << math << ", ���� : " << eng << ", ���� : " << kr + math + eng << ", ��� : " << (kr + math + eng) / 3 << ']' << endl;
	}
	~Grade() { delete[] name; }
	
	int getKo() {
		return kr;
	}
	int getEng() {
		return eng;
	}
	int getMath() {
		return math;
	}
	int sum() {
		int sum = kr + eng + math;
		return sum;
	}
	double avr() {
		return sum() / 3;
	}
};

int main() {
	Grade* gradeAry[3]; //��ü ������ �迭

	int len = 0;
	char name[20] = {};
	int inKo = 0;
	int inEng = 0;
	int inMath = 0;

	for (int i = 0; i < 3; i++) {
		cout << "�̸�: ";
		cin >> name;
		cout << "�������� : ";
		cin >> inKo;
		cout << "�������� : ";
		cin >> inEng;
		cout << "�������� : ";
		cin >> inMath;
		len = strlen(name) + 1;
		cout << name << inKo << inEng << inMath << endl;

		printf("%d��° �л����� : %d, ����:%.1lf\n", gradeAry[i]->sum(), gradeAry[i] -> avr());
	}
	
	/*for (int j = 0; j < 3; j++) {
		gradeAry[j] = new Grade(name, inKo, inEng, inMath);
		printf("%d��° �л����� : %d, ����:.1lf\n", gradeAry[j]->sum(),gradeAry[j]->avr());
	}*/
	cout << gradeAry[0] << endl;
	return 0;
}