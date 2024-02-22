#include<iostream>
using namespace std;
/*
	swap함수 구현하기
*/
int swap(int *a, int *b) {		// 주소를 받을 수 있는 포인터변수를 선언
	int temp = 0;
	temp = *a;					//
	*a = *b;
	*b = temp;
	return 0;
}
int main() {
	
	int a = 10;					//지역 변수
	int b = 20;

	cout << "before:" << endl;
	cout << "a:" <<a<< endl;
	cout << "b:" <<b<< endl;

	swap(&a, &b);				// 변수의 주소를 전달

	cout << "after:" << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	return 0;
	// A && B 논리연산자
	// A & B 비트연산자
	int c = 40 // 일반적인 변수 선언 
	int* ptr; // 주소갑 선언
	int* ptr = &num1;  //가능한 값
	int& num3 = num3; // 참조 변수 선언 

}
