#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Employee {
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const {
		cout << "name : " << name << endl;
	}
	virtual int GetPay() const {
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{ }
};
class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money)
	{}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class SalesWorker : public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		cout << "SalesWorker" << endl;
		return PermanentWorker::GetPay()
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class EmployeeHandler {
private:
	Employee* empList[50];	//��ü������ �迭
	int empNum;
public:
	EmployeeHandler() : empList(), empNum(0)
	{}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		/*
		for(int i=0; i<empNum; i++)
			empList[i] -> ShowSalaryInfo();
		*/
	}
	void ShowTotalSalary() const {
		int sum = 0;
		/*
		for(int i=0; i<empNum; i++)
			empList[i] -> GetPay();
		*/
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};
int main(void) {
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 11000));

	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("JUNG", 600);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker* seller = new SalesWorker("HONG", 1000, 0.1);
	seller->AddSalesResult(6000);
	handler.AddEmployee(seller);

	//�̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	//�̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	SalesWorker s("dasdad", 1000, 0.1);
	cout << s.GetPay() << endl;
	s.ShowSalaryInfo();
	return 0;
}