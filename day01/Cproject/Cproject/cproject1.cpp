#include <iostream>

using namespace std; // std ���ӽ����̽��� ��� ���� ���

int main()
{
	int inKey;
	cout << "���� �ϳ��� �Է� > " << endl;
	cin >> inKey;

    for (int i = 0; i <= 10; ++i) {

        // �Է� ���� 5�� �Է� ������ 'Bingo'���
        if (inKey == 5) { 
            cout << "Bingo" << endl;
            break;
        }

        // �Է� ���� 5�� �Ѿ������, ������� 'Down' ���
        else if (inKey > 5) {
            cout << "Down" << endl;
            break;
        }

        // �Է� ���� 5���� ������, �ø���� 'Up' ���
        else if (inKey < 5) {
            cout << "Up" << endl;
            break;
        }
    }

	return 0;

}