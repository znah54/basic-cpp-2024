#include<iostream>
using namespace std;
class FruitSeller
{
private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;
public:
	FruitSeller(int price, int num, int money) {
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;
	}
		void ShowSalesResult() const
		{
			cout << "���� ��� :" << numofApples << endl;
			cout << "�Ǹ� ���� :" << myMoney << endl << endl;
		}
};

class FruitBuyer
{
private:
	int myMoney;
	int numofApples;
public:
	FruitBuyer(int money) {
		myMoney = money;
		numofApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numofApples += seller.SaleApples(money);
		myMoney -= money;
	 }
	void ShowBuyResult() const
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� :" << numofApples << endl << endl;
	}
};
int main(void) {
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}

 