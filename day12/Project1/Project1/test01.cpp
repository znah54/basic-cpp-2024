#include<iostream>
using namespace std;

void cal(int n1, int n2) {
	cout << "���� 2���� �Է��ϼ��� : " << endl;
	cin >> n1 >> n2;

	cout << "+ : "<<n1+n2 << endl;
	cout << "- : "<<n1-n2 << endl;
	cout << "x : "<<n1*n2 << endl;
	cout << "/ : " << n1 / n2 << endl;

}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "���� 2���� �Է��ϼ��� : " << endl;
	cin >> n1 >> n2;
	try { cal(n1, n2); }
	catch (int exception) { cout << "0���� ���� �� �����ϴ�." << endl; }
	return 0;
	/*try {
		if (!n2) throw n2;
		cout << "/ : " << n1 / n2 << endl;
	}
	catch (int exception) {
		cout << "0 ���� ���� �� �����ϴ�." << endl;
	}
	return 0;
}*/
}