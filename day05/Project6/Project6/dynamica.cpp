/*
메모리 동적할당 : new 연사자 사용
프로그램 실행 중에 메모리를 할당 받는다.

*/
#include<iostream>
using namespace std;
int main()
{
	cout << "인트크기 : " << sizeof(int) << endl;
	int *pi = new int;				//주소값할당 new연사자를 통해서 heap영역에 int(4byte) 크기만큼 메모리공간을 할당바고 할당받은
									// 메모리의 주소를 리턴시켜준다.
	*pi = 10;
	cout << "Pi가 가리키는 곳에 저장된 값 :" << *pi << endl;

	delete pi;						// 동적 할당받은 메모리 공간을 반환한다.
	int* pary = new int[10];		// 배열형태로 할당
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10;			// 배열의 각 방에 원소(요소)값을 집어 넣는다. ex) pary[0] = 10
	}
	for (int i = 0; i < sizeof(pary); i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;					// 배열로 동적할당한 메모리를 반환한다.


	return 0;
}