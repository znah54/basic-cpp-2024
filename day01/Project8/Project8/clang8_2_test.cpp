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
int divide(int a, int b) {
    if (a == 0 || b == 0) {
        cout << "0���� ���� �� �����ϴ�." << endl;
        exit(1); // ���α׷� ����
        }
        return a / b;
}


int main() {
    int num1, num2;
    char op;

    // ����ڷκ��� �� ���� ���ڿ� ������ �Է� �ޱ�
    cout << "ù ��° ���ڸ� �Է��ϼ���: ";
    cin >> num1; // cin�� num1 ����

    cout << "�����ڸ� �Է��ϼ��� (+, -, *, /): ";
    cin >> op; // cin�� op ����

    cout << "�� ��° ���ڸ� �Է��ϼ���: ";
    cin >> num2; // cin�� num2 ����

    // ���꿡 ���� ��� ���
    switch (op) {
    case '+':
        cout << "���: " << add(num1, num2) << endl;
        break;
    case '-':
        cout << "���: " << subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "���: " << multiply(num1, num2) << endl;
        break;
    case '/':
        cout << "���: " << divide(num1, num2) << endl;
        break;
    default:
        cout << "�߸��� �������Դϴ�." << endl;
    }

    return 0;
}