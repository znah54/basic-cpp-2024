#include<iostream>
using namespace std;

class SoSimple {
public:								//���������� public
	static int simObjCnt;			//static ������� ����(Ŭ���� ���)
public: //�� �ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵ ��
	SoSimple() {
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;		//static ��������� �ʱ�ȭ
int main(void) {
	cout << SoSimple::simObjCnt << "��° SpSimple ��ü" << endl;	// Ŭ�����̸����� static ����� ���ٰ���
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° Sosimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
	return 0;
}


