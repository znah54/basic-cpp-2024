#include <iostream>

using namespace std; // std ���ӽ����̽��� ��� ���� ���

/*
if, else ��
*/
int main() {

	int inKey;
	cout << "put Int > " << endl;
	cin >> inKey;


	// inKey�� 5�̸�, inKey �� ���� ���
	if (inKey == 5) { // if (���ǽ�) {... ���๮}
		cout << "Bingo" << endl;
	}

	// inKey�� 5�� ũ��, inKey �� ��������� ��
	else if (inKey > 5) {
		cout << "Down" << endl;
	}

	// inKey�� 5���� ������, inKey �� �ö󰡶�� ��
	else if (inKey < 5) {
		cout << "Up" << endl;
	}

	else cout << "Put Wrong Number > ";

	//Python elif = C/C++ else if
	return 0;
}