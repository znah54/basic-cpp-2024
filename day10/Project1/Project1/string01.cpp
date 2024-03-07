#include<iostream>
using namespace std;

int main() {

	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "=============================" << endl;	
	char ary[6] = { 'a','b','c','d','e' };				//문자열 타입의 배열 선언
	cout << ary << endl;	
	cout << "=============================" << endl;	
	char ary1[6] = { 'a','b','c','d','\0','e' };		// 널문자-문자열의 끝을 알린다
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;						//전체 문자 크기
	cout << strlen(ary1) << endl;						//널문자 앞까지의 크기
	cout << "=============================" << endl;
	char str[] = "string";								//자동으로 널문자가 붙는다.
	cout << str << endl;								
	cout << sizeof(str) << endl;						//널문자가 포함된 크기가 리턴된다.
	cout << strlen(str) << endl;
	str[0] = 'S';
	cout << "=============================" << endl;
	const char *pstr = "string";
	cout << pstr << endl;
	cout << strlen(pstr) << endl;						// 널문자가 포함된 크기가 리턴된다
	int a = 100;
	cout << strlen(pstr) << endl;
	//pstr[0]											// 문자열을 포인터로 사용하는 경우는 변경이 불가능하다.

	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	cout << s.size() << endl;

	string s1 = "dsd";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;
	cout << s1.size() << endl;



	return 0;
}