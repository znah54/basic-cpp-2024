#include <iostream> 


//���, �Է�
int main(void) {
	// �޸� �� = �Ҵ� �޾ƾ� �� ������ = int ��... 
	// ���� �ڵ� �ۼ� �� ������ c++ �ڵ� = int �ڷ��� ������ = 10�� ����� �޾Ƽ� ��!
	int a = 10; //int => type, �ڷ���(ũ��)** �̰Ÿ� �ܿ���, ������ ũ�� �ٸ�, ���������� ����


	// ����, ���ڿ� = ���� 1��, 2���̻��� ���� = ���ڿ�
	// ���� = ' ', ���ڿ� = " " => ������ �߿� �� Ȯ��...
	// << => "Hello World"  -> std::count�� ���, std::endl �� std::count -> ���
	std::cout << "Hello World!" << std::endl; //std = �ȿ� ���� std::endl -> ���� ��Ű�°�, �̹��� ������ ��
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << a << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}


// ������� ���� = #include <iostream>
// c������ <stdio.h> ���
// std::cout + << => �̿��Ͽ� ���
// std::endl => ��