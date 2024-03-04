#include <iostream>
using namespace std;

// First Ŭ���� ����
class First
{
public:
    // ���� �Լ� MyFunc() ����
    virtual void MyFunc()
    {
        cout << "FirstFunc" << endl;
    }
};

// Second Ŭ���� ����, First Ŭ������ ��ӹ���
class Second : public First
{
public:
    // ���� �Լ� MyFunc() ������
    virtual void MyFunc()
    {
        cout << "SecondFunc" << endl;
    }
};

// Third Ŭ���� ����, Second Ŭ������ ��ӹ���
class Third : public Second
{
public:
    // ���� �Լ� MyFunc() ������
    virtual void MyFunc()
    {
        cout << "ThirdFunc" << endl;
    }
};

int main(void)
{
    // Third Ŭ������ ��ü�� ����Ű�� ������ tptr�� ����
    Third* tptr = new Third();
    // tptr�� Second Ŭ������ ������ sptr�� �Ҵ� (Ÿ�� ��ȯ)
    Second* sptr = tptr;
    // sptr�� First Ŭ������ ������ fptr�� �Ҵ� (Ÿ�� ��ȯ)
    First* fptr = sptr;

    // fptr�� ����Ű�� ��ü�� MyFunc() �Լ� ȣ�� (���� ���ε�)
    fptr->MyFunc(); // "ThirdFunc" ���
    // sptr�� ����Ű�� ��ü�� MyFunc() �Լ� ȣ�� (���� ���ε�)
    sptr->MyFunc(); // "ThirdFunc" ���
    // tptr�� ����Ű�� ��ü�� MyFunc() �Լ� ȣ�� (���� ���ε�)
    tptr->MyFunc(); // "ThirdFunc" ���

    // �������� �Ҵ�� �޸� ����
    delete tptr;

    return 0;
}

/* �߰� ����
1. First, Second, Third Ŭ�������� ���ǵ˴ϴ�. �� Ŭ������ ���� �Լ� MyFunc()�� �����ϰ� ������.

2. main() �Լ����� Third Ŭ������ ��ü�� ����Ű�� ������ tptr�� ����.

3. tptr�� Second Ŭ������ ������ sptr�� �Ҵ��� ��, sptr�� First Ŭ������ ������ fptr�� �Ҵ���. 
    -> �̰��� ��ĳ����.

4. fptr, sptr, tptr�� ���� ����Ű�� ��ü�� MyFunc() �Լ��� ȣ��. 
    -> �̶�, ���� �Լ��� ���� ���ε��� �̷����.

5. delete �����ڸ� ����Ͽ� �������� �Ҵ�� �޸𸮸� ����

*/