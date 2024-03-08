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
		cout << "소멸자호출" << endl;
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
	//Grade* gradeAry[3]; //객체 포인터 배열
	Grade gradeAry[100];	//객체 배열
	int a;
	char name[20] = {};
	int inKo = 0;
	int inEng = 0;
	int inMath = 0;

	cout << "성적처리 학생 수 : " << endl;
	cin >> a;
	//vector<Grade> gradeAry(a);
	for (int i = 0; i < a; i++) {

		cout << "이름: ";
		cin >> name;
		cout << "국어점수 : ";
		cin >> inKo;
		cout << "영어점수 : ";
		cin >> inEng;
		cout << "수학점수 : ";
		cin >> inMath;
		cout << name << inKo << inEng << inMath << endl;
	}
	return 0;
}
	