#include <iostream>

using namespace std; // std ���ӽ����̽��� ��� ���� ���

int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum = sum + i;
	}
	std::cout << sum << std::endl;

	return 0;

}