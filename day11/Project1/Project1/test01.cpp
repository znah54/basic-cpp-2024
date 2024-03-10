/*class Book : ISBN, author, title
class Handphone : model, RAM
	객체포인터 배열 사용 : product[100]
	string 클래스 사용 가능하다

	메인화면
	----------상품 관리 프로그램-------- -
	1. 상품추가	2. 상품출력	3. 상품조회	0.종료
	>

	1 또는 2또는 3을 선택한 경우
	1.책	2.핸드폰	3.컴퓨터
	선택 목록을 띄워 해당 상품을 선택한 후에 추가 또는 조회가 실행된다.
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
		cout << "어떤 상품품목을 추가하시겠습니까?" << endl;
		cout << "1. 책   2.핸드폰   3.컴퓨터 " << endl;
		cout << "> " << endl;
		cin >> menu;
		while (true) {
			int num1, num2, num3;
			if (menu = 1) {
				cout << "1.고유번호(ISBN) :  " << endl;
				cin >> num1;
				cout << "2.작가 : " << endl;
				cin >> num2;
				cout << "3. 제목 : " << endl;
				cin >> num3;
			}
		}
	}

	void showproduct() {
		cout << "어떤 상품목록을 보시겠습니까?" << endl;
		cout << "1. 책   2.핸드폰   3.컴퓨터 " << endl;
	}
	void researchproduct() {
		int sernum;
		cout << "어떤 상품목록을 찾아보시겠습니까?" << endl;
		cout << "1. 책   2.핸드폰   3.컴퓨터 " << endl;
		cout << "> " << endl;
		cin >> sernum;
		while (true)
		{
			if (sernum = 1) {
				cout << "대여할 책 고유번호 입력 >> " << endl;
				cin >> ISBN;
				bool isEmpty = true;
				for (int i = 0; i < ROW; i++) {
					for (int j = 0; j < COL; j++) {
						
					}
				}
			}
			else cout << "이미 재고가 있습니다" << endl;
		}
	}
	void exit() {
		cout << "프로그램 종료" << endl;
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
	cout << "------ 상품관리 프로그램 -------" << endl;
	cout << "1. 상품추가  2. 상품출력  3. 상품검색  0.종료"<<endl;
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