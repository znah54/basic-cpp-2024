#include<iostream>
int main() {
	int val1;	// 메모리공간에 int크기로 저장공간을 할당받고 val이름으로 사용한다.
	std::cout << "첫 번째 숫자입력 :";
	std::cin >> val1;
	
	int val2;
	std::cout << "첫 번째 숫자입력 :";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과 : " << result << std::endl;

	return 0;

	// 지역변수 = 로컬변수 : 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)
}
