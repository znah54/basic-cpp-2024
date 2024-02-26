#include<iostream>
#include<cstring>
using namespace std;
class StudentClass {
private:
	const int ID;  // �й� ���ȭ
	char* name;		//���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	char* major;
	int age;
public:
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	// ��� �̴ϼȶ���� ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ�. �� ��ü������ ������� �̸� �ʱ�ȭ�� �Ǵ���
	StudentClass(int id,const char *n, const char *m, int a) : ID(id) {
		//ID = id;
		strcpy(name, n);			// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �ȴ�.
		strcpy(major, m);
		age = a;
	}
	void Showmy() const {
		cout << "�̸�:" << name << endl;
		cout << "����:" << age << endl;
		cout << "����:" << major << endl;
		cout << "�й�:" << ID << endl;
	}
};
int main()
{
	StudentClass student(151,"dddd","aaaa",1515);		//��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�.
	student.Showmy();
	return 0;
}