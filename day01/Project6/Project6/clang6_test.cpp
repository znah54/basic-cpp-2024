#include <iostream>

int main(void) {

	
	char name[100];
	char lang[200];



	std::cout << "What is your name? => ";
	std::cin >> name;

	std::cout << "�����ϴ� Program => ";
	std::cin >> lang;

	std::cout << "My name is " <<name<<"�Դϴ� \n";
	std::cout << "�����ϴ� Program is " << lang << "�Դϴ�"<< std::endl;
	return 0; // ���α׷��� ���� ���Ḧ ��Ÿ��.
}

// �ڷ���
// ���� : ����(char),���ڿ�
// ���� : ����(int),�Ǽ�

// 1.char�κ�:
// -> ũ�Ⱑ ���� 100, 200�� ���� �迭 name�� lang�� ����. 
// --> �� �迭���� ����ڷκ��� �Է��� ���� �� ���.

// 2. std  cout << name �κ�: 
// -> ����ڿ��� �̸��� ���� ������Ʈ�� ���

// 2 - 1. std cin << name �κ�: 
// -> ����ڰ� �Է��� �̸��� name �迭�� ����

// 3. std  cout << program �κ�:
// -> ����ڿ��� � ���α׷��� �� �����ϴ��� ���� ������Ʈ�� ���

// 3 - 1. std cin << lang �κ�:
// -> ����ڰ� �Է��� �����ϴ� ���α׷��� �� lang �迭�� ���� 

// 4. std::cout << "My name is " <<name<<"�Դϴ� \n" : 
// -> ����ڰ� �Է��� �̸��� ��� 

// 5. std::cout << "�����ϴ� Program is " << lang << "�Դϴ�" << std::endl : 
// -> ����ڰ� �Է��� �����ϴ� ���α׷��� �� ���

