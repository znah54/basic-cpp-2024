#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* parr = arr;

	printf("arr �ּ� : %p\n", arr);			
	printf("arr ũ�� : %u\n", sizeof(arr));

	printf("arr[0] �ּ� : %p\n", &arr[0]);	// arr�� �ּҿ� ����
	printf("arr[1] �ּ� : %p\n", &arr[1]);
	printf("arr + 1 �ּ� : %p\n", arr + 1);	// arr[1]�� �ּҿ� ����

	printf("parr �ּ� : %p\n", &parr);
	printf("parr ������ : %p\n", parr);		// arr�� �ּҿ� ����
	printf("parr + 1 : %p\n", parr + 1);	// arr[1]�� �ּҿ� ����
	printf("parr[] : %d, *pa : %d arr[0] : %d\n", parr[0], *parr, arr[0]);	// ��� ���� ���� ���� ����Ŵ

	return 0;
}