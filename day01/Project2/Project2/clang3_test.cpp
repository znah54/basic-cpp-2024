#include <iostream>

int main(void) 
{
	int val1;
	std::cout << "ù��° ���� �Է�:";
	std::cin >> val1;

	int val2;
	std::cout << "�ι�° ���� �Է�:";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "Add Result: " << result << std::endl;
	return 0;
}