#include<iostream>
#include<vector>
using namespace std;

int main() {
	/*int a;
	cout << "정수입력 : "<<endl;
	cin >> a;
	for (vector<int>::size_type i = 0; i < v1.size(); i++) {
		v1.push_back(i + 1);
		printf("v[%d] : %d\n", i, v1[i]);
		printf("평균값 : %d\n", v1);
	}*/
	vector<int> v1;
	int inKey;
	int sum;
	while (true) {
		cout << "정수 한개 입력 (0입력시 종료) : ";
		cin >> inKey;
		if (!inKey) {
			break;
		}
		v1.push_back(inKey);
		sum += inKey;
		cout << sum / v1.size() << endl;
	}
	cout << "프로그램을 종료합니다." << endl;


	return 0;
}