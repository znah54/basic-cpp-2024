#include <iostream>

using namespace std; // std ���ӽ����̽��� ��� ���� ���

/*
	�������: Switch
	
*/
int main()
{
	int inKey;
	cout << "put Int > " << endl;
	cin >> inKey;

    switch (inKey) {
    case 5:
        cout << "Bingo" << endl;
        break;

    // 5���� ū ���
    case 6:
        cout << "This is 6, Number Down" << endl; 
        break;
    case 7:
        cout << "This is 7, Number Down" << endl;
        break;
    case 8:
        cout << "This is 8, Number Down" << endl;
        break;
    case 9:
        cout << "This is 9, Number Down" << endl;
        break;
    case 10:
        cout << "This is 10, Number Down" << endl;
        break;

    // 5���� ���� ���
    
    case 4: 
        cout << "This is 4, Number Up" << endl;
        break;
    case 3:
        cout << "This is 3, Number Up" << endl;
        break;
    case 2:
        cout << "This is 2, Number Up" << endl;
        break;
    case 1:
        cout << "This is 1, Number Up" << endl;
        break;
    case 0:
        cout << "This is 0, Number Up" << endl;
        break;
    default:
        cout << "Invalid input" << endl; // �⺻������ �ٸ� �Է� ��
    }


	return 0;
}

// break �� 
// -> case�� break �� �� ���!! break ��������, ���� case ��°��� ����

// default �� 
// -> ���� ���� �ִ� ���� �̿ܿ� ���� ���� �� Invaild input ���