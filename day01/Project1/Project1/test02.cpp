#include<iostream>
int main() {
	int val1;	// �޸𸮰����� intũ��� ��������� �Ҵ�ް� val�̸����� ����Ѵ�.
	std::cout << "ù ��° �����Է� :";
	std::cin >> val1;
	
	int val2;
	std::cout << "ù ��° �����Է� :";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������� : " << result << std::endl;

	return 0;

	// �������� = ���ú��� : ����Ǿ��� ���� �ȿ����� ����� ����(static ������ ����)
}
