#include<iostream>
#include<string.h>
using namespace std;
char* MakeStrAdr(int len)
{
	char* str = new char[len];		// C++: 힙영역에 len크기만큼 메모리 공간 할당
	return str;
}
int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	delete[] str;
	return 0;						// C++ : 할당받은 메모리를 반환
	// 객체는 항상 Heap에 저장된다.
}