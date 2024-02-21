#include<iostream>
using namespace std;
int main(void) {
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자 입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "두 수사의 정수 합 : " << result << std::endl;
	return 0;
}

/* for (초기식; 조건식; 증감식; {
	1. 초기식을 가지고 조건식을 따진다.
	2. 참이면 for문의 실행문을 실행하고
	3. 증감식을 실행한다.
	4. 조건식을 따지고
	
*/