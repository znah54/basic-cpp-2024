#include<iostream>
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
	Grade* gradeAry[3]; //��ü ������ �迭

	char name[20] = {};
	int inKo = 0;
	int inEng = 0;
	int inMath = 0;

	cout << "�̸�: ";
	cin >> name;
	cout << "�������� : ";
	cin >> inKo;
	cout << "�������� : ";
	cin >> inEng;
	cout << "�������� : ";
	cin >> inMath;
	cout << name << inKo << inEng << inMath << endl;
	
	gradeAry[i]= new Grade(name, inKo, inEng, inMath);

		for (int i = 0; i < 3; i++) 
{
	printf("i��° �л����� : %d, ����:%.1lf\n", gradeAry[i]->sum(), gradeAry[i] -> avr());
}
	cout << gradeAry[0]->getKo() << endl;
	
		for (int i = 0; i < 3; i++) 
{
	printf("��ü �Ҵ� �Ҹ��� ȣ��");
	delete gradeAry[i];
}
	return 0;
}