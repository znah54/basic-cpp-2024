#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // ����ڷκ��� �� ���� ���� �Է� �ޱ�
    cout << "ù ��° ���ڸ� �Է��ϼ���: ";
    cin >> num1; // cin�� num1 ����

    cout << "�� ��° ���ڸ� �Է��ϼ���: ";
    cin >> num2; // cin�� num2 ����

    // �Է¹��� �� ������(num1, num2) �� ���
    int sum = num1 + num2;
    int sub = num1 - num2;
    int multi = num1 * num2;
    int div = num1 / num2;

    // ��� ���
    cout << "�� ������ ��: " << sum << endl;
    cout << "�� ������ ����: " << sub << endl;
    cout << "�� ������ ��: " << multi << endl;
    cout << "�� ������ ��: " << div << endl;

    return 0;
}
