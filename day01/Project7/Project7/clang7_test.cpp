#include <iostream>

using namespace std;

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main() 
{
	// �Ű������� ���� MyFunc(void) �Լ��� ȣ��.
	// �̴� void MyFunc(void)�� ȣ��.
	MyFunc();

	// ���� 'A'�� �Ű������� ���� MyFunc(char c) �Լ��� ȣ��. 
	// -> �̴� void MyFunc(char c)�� ȣ��.
	MyFunc('A');

	// �� ���� ���� 12�� 13�� �Ű������� ���� MyFunc(int a, int b) �Լ��� ȣ��.
	// �̴� void MyFunc(int a, int b)�� ȣ��.
	MyFunc(12,13);
	return 0;
}