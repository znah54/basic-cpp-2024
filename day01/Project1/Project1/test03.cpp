#include<iostream>
using namespace std;
int main(void) {
	int val1, val2;
	int result = 0;
	std::cout << "�� ���� ���� �Է�: ";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "�� ������ ���� �� : " << result << std::endl;
	return 0;
}

/* for (�ʱ��; ���ǽ�; ������; {
	1. �ʱ���� ������ ���ǽ��� ������.
	2. ���̸� for���� ���๮�� �����ϰ�
	3. �������� �����Ѵ�.
	4. ���ǽ��� ������
	
*/