#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Grade {
private:
	char name[50];
	int kr, math, eng;
public:
	Grade(const char* myname, int mykr, int mymath, int myeng) : kr(mykr), math(mymath), eng(myeng){
		strcpy(name, myname);
	}
	Grade operator+(const Grade& pos) const {
		return Grade(name ,kr + pos.kr, math + pos.math, eng + pos.eng);
	}
	void ShowGradeInfo() const {
		cout << name << " = [����:" << kr << ", ���� : " << math << ", ���� : " << eng << ", ���� : " << kr + math + eng << ", ��� : " << (kr + math + eng) / 3 << ']' << endl;
	}
	~Grade() { }
	friend ostream& operator<<(ostream& os, const Grade& pos);
};

ostream& operator<<(ostream& os, const Grade& pos) {
	os << "���� ����: " << pos.kr << ", ���� ����: " << pos.math << ", ���� ����: " << pos.eng << endl;
	os << "���� ���: " << (pos.kr) / 3 << ", ���� ���: " << (pos.math) / 3 << ", ���� ���: " << (pos.eng) / 3 << endl;
	return os;
}

class Adder {
public:
	Grade operator()(const Grade& pos1, const Grade& pos2, const Grade& pos3) {
		cout << "��ü ����" << endl;
		return pos1 + pos2 + pos3;
	}
};

int main() {
	Adder adder;
	char name[50];
	int a, b, c;
	cout << "�̸� ���� ���� ������� ������� �Է��ϼ��� : ";
	cin >> name >> a >> b >> c;
	Grade st1(name, a, b, c);
	st1.ShowGradeInfo();
	Grade st2("��ö��", 98, 98, 98);
	st2.ShowGradeInfo();
	Grade st3("���ֿ�", 100, 100, 100);
	st3.ShowGradeInfo();
	cout << endl;

	cout << adder(st1, st2, st3) << endl;

	return 0;
}