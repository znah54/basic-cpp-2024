#include<iostream>
#include<vector>
using namespace std;
class Grade {
	char* name;
	int ko;
	int eng;
	int math;
public:
	Grade(const char* name, int ko, int eng, int math) {
		this->name = new char[strlen(name) + 1];
		this->ko = ko;
		this->eng = eng;
		this->math = math;
	}
	Grade() {
		cout << "�Ҹ���ȣ��" << endl;
		delete[] name;
	}
	int getKo() {
		return ko;
	}
	int getEng() {
		return eng;
	}
	void getMath() {
		return math;
	}
	void sum() {

		int sum = ko + eng + math;
		return sum;
	}
	void avr() {
		sum() / 3;
	}
};
int main() {
	//Grade* gradeAry[3]; //��ü ������ �迭
	Grade gradeAry[100];	//��ü �迭
	int a;
	char name[20] = {};
	int inKo = 0;
	int inEng = 0;
	int inMath = 0;

	cout << "����ó�� �л� �� : " << endl;
	cin >> a;
	//vector<Grade> gradeAry(a);
	for (int i = 0; i < a; i++) {

		cout << "�̸�: ";
		cin >> name;
		cout << "�������� : ";
		cin >> inKo;
		cout << "�������� : ";
		cin >> inEng;
		cout << "�������� : ";
		cin >> inMath;
		cout << name << inKo << inEng << inMath << endl;
	}
	return 0;
}
	