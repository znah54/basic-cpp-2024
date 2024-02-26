#include<iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};
class SneezeCap{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};
class SnuffleCap{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�. " << endl; }
};
class coldPatient {
public:
	void TakeSinivelCap(const SinivelCap & cap)const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap)const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap & cap)const { cap.Take(); }
};
int main() {
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	coldPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
}