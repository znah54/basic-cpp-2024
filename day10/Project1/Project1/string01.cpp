#include<iostream>
using namespace std;

int main() {

	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "=============================" << endl;	
	char ary[6] = { 'a','b','c','d','e' };				//���ڿ� Ÿ���� �迭 ����
	cout << ary << endl;	
	cout << "=============================" << endl;	
	char ary1[6] = { 'a','b','c','d','\0','e' };		// �ι���-���ڿ��� ���� �˸���
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;						//��ü ���� ũ��
	cout << strlen(ary1) << endl;						//�ι��� �ձ����� ũ��
	cout << "=============================" << endl;
	char str[] = "string";								//�ڵ����� �ι��ڰ� �ٴ´�.
	cout << str << endl;								
	cout << sizeof(str) << endl;						//�ι��ڰ� ���Ե� ũ�Ⱑ ���ϵȴ�.
	cout << strlen(str) << endl;
	str[0] = 'S';
	cout << "=============================" << endl;
	const char *pstr = "string";
	cout << pstr << endl;
	cout << strlen(pstr) << endl;						// �ι��ڰ� ���Ե� ũ�Ⱑ ���ϵȴ�
	int a = 100;
	cout << strlen(pstr) << endl;
	//pstr[0]											// ���ڿ��� �����ͷ� ����ϴ� ���� ������ �Ұ����ϴ�.

	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	cout << s.size() << endl;

	string s1 = "dsd";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;
	cout << s1.size() << endl;



	return 0;
}