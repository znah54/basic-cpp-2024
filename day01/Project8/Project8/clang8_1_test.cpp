#include <iostream>

using namespace std;

// �� ������ ���� ����ϴ� �Լ�
int add(int a, int b) {
    return a + b;
}

// �� ������ ���� ����ϴ� �Լ�
int subtract(int a, int b) {
    return a - b;
}

// �� ������ ���� ����ϴ� �Լ�
int multiply(int a, int b) {
    return a * b;
}

// �� ������ �������� ����ϴ� �Լ�
// ����: ���������� �� ��° ���ڰ� 0�� ��쿡�� ������ �߻��� �� �����Ƿ� �̿� ���� ó���� �ʿ��մϴ�.
// �� ���������� ���� ó���� ���� �ʾҽ��ϴ�.
int divide(int a, int b) {
    return a / b;
}

int main() {
    int num1, num2;

    // ����ڷκ��� �� ���� ���� �Է� �ޱ�
    cout << "ù ��° ���ڸ� �Է��ϼ���: ";
    cin >> num1; // cin�� num1 ����

    cout << "�� ��° ���ڸ� �Է��ϼ���: ";
    cin >> num2; // cin�� num2 ����

    // ��� ���
    cout << "�� ������ ��: " << add(num1, num2) << endl;
    cout << "�� ������ ����: " << subtract(num1, num2) << endl;
    cout << "�� ������ ��: " << multiply(num1, num2) << endl;
    cout << "�� ������ ������: " << divide(num1, num2) << endl;

    return 0;
}
