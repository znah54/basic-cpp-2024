#include <iostream>

using namespace std; // std ���ӽ����̽��� ��� ���� ���

/*
�ݺ����:while
*/
int main() {

    int inKey;
    cout << "put Int > " << endl;
    cin >> inKey;

    while (true) {
        cout << "Enter a number: ";
        cin >> inKey;

        switch (inKey) {
        case 5:
            cout << "Bingo" << endl;
            break; // �ݺ����� ���� ���ö�

            // 5���� ū ���
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "This is " << inKey << ", Number Down" << endl;
            break;

            // 5���� ���� ���
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "This is " << inKey << ", Number Up" << endl;
            break;

        default:


            return 0;

        }
    }
}