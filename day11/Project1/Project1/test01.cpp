/*class Book : ISBN, author, title
class Handphone : model, RAM
	��ü������ �迭 ��� : product[100]
	string Ŭ���� ��� �����ϴ�

	����ȭ��
	----------��ǰ ���� ���α׷�-------- -
	1. ��ǰ�߰�	2. ��ǰ���	3. ��ǰ��ȸ	0.����
	>

	1 �Ǵ� 2�Ǵ� 3�� ������ ���
	1.å	2.�ڵ���	3.��ǻ��
	���� ����� ��� �ش� ��ǰ�� ������ �Ŀ� �߰� �Ǵ� ��ȸ�� ����ȴ�.
	*/
#include<iostream>
#include<string>
#include<list>
#include<fstream>
#include<cstring>
using namespace std;
class Parent {
private:
	int id, price, producer;
	char produce[100];
public:
	void addprooduct() {
		int menu;
		cout << "� ��ǰǰ���� �߰��Ͻðڽ��ϱ�?" << endl;
		cout << "1. å   2.�ڵ���   3.��ǻ�� " << endl;
		cout << "> " << endl;
		cin >> menu;
		while (true) {
			int num1, num2, num3;
			if (menu = 1) {
				cout << "1.������ȣ(ISBN) :  " << endl;
				cin >> num1;
				cout << "2.�۰� : " << endl;
				cin >> num2;
				cout << "3. ���� : " << endl;
				cin >> num3;
			}
		}
	}

	void showproduct() {
		cout << "� ��ǰ����� ���ðڽ��ϱ�?" << endl;
		cout << "1. å   2.�ڵ���   3.��ǻ�� " << endl;
	}
	void researchproduct() {
		int sernum;
		cout << "� ��ǰ����� ã�ƺ��ðڽ��ϱ�?" << endl;
		cout << "1. å   2.�ڵ���   3.��ǻ�� " << endl;
		cout << "> " << endl;
		cin >> sernum;
		while (true)
		{
			if (sernum = 1) {
				cout << "�뿩�� å ������ȣ �Է� >> " << endl;
				cin >> ISBN;
				bool isEmpty = true;
				for (int i = 0; i < ROW; i++) {
					for (int j = 0; j < COL; j++) {
						
					}
				}
			}
			else cout << "�̹� ��� �ֽ��ϴ�" << endl;
		}
	}
	void exit() {
		cout << "���α׷� ����" << endl;
		exit;
	}
};

class Book : public Parent {
private:
	char ISBN[100]; 
	char author[100];
	char title[100];
public:
	Book(const char* ISBN, const char* author, const char* title) {
		strcpy(this ->ISBN,ISBN);
		strcpy(this->author, author);
		strcpy(this->title, title);
	}
	Book() {};
	~Book() {};
	char * getTitle();
	char* getGenre();
};

class Handphone : public Parent {
	char model[100];
	char RAM[100];
};

class Computer : public Parent {
	char model[100];
	char RAM[100];
	char cpu[100];
};

int main() {
	int a;
	cout << "------ ��ǰ���� ���α׷� -------" << endl;
	cout << "1. ��ǰ�߰�  2. ��ǰ���  3. ��ǰ�˻�  0.����"<<endl;
	cout << "> ";
	cin >> a;
	while(true)
	if (a = 1) {

	}
	if (a = 2) {

	}
	if (a = 3) {

	}
	if (a = 0) {
		exit(0);
	}

	return 0;
}