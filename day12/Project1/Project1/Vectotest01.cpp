#include<iostream>
#include<vector>
using namespace std;

int main() {
	/*int a;
	cout << "�����Է� : "<<endl;
	cin >> a;
	for (vector<int>::size_type i = 0; i < v1.size(); i++) {
		v1.push_back(i + 1);
		printf("v[%d] : %d\n", i, v1[i]);
		printf("��հ� : %d\n", v1);
	}*/
	vector<int> v1;
	int inKey;
	int sum;
	while (true) {
		cout << "���� �Ѱ� �Է� (0�Է½� ����) : ";
		cin >> inKey;
		if (!inKey) {
			break;
		}
		v1.push_back(inKey);
		sum += inKey;
		cout << sum / v1.size() << endl;
	}
	cout << "���α׷��� �����մϴ�." << endl;


	return 0;
}