#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char* name; // �̸��� �����ϱ� ���� ���ڿ� ������
    int age; // ���̸� �����ϱ� ���� ������ ����

public:
    // ������: �̸��� ���̸� �޾� ��� ������ �ʱ�ȭ�ϴ� ���� ����
    Person(const char* myname, int myage)
    {
        int len = strlen(myname) + 1; // �Էµ� �̸��� ���� ���
        name = new char[len]; // ���� �޸� �Ҵ�
        strcpy(name, myname); // �Էµ� �̸��� �����Ͽ� ��� ���� name�� ����
        age = myage; // �Էµ� ���̸� ��� ���� age�� ����
    }

    
    // �ּ� ó���� ���� ������ �����ε� �Լ�
    Person& operator=(const Person& ref)
    {
        delete []name; // ������ �Ҵ�� �޸𸮸� ����

        int len=strlen(ref.name)+1; // ������ ��ü�� �̸� ���� ���
        name= new char[len]; // ���ο� �޸� �Ҵ�
        strcpy(name, ref.name); // ������ ��ü�� �̸��� �����Ͽ� ��� ���� name�� ����
        age=ref.age; // ������ ��ü�� ���̸� ��� ���� age�� ����
        return *this; // ������ �Ϸ�� ���� ��ü ��ȯ
    }

    // ��ü�� �̸��� ���̸� ����ϴ� �Լ� (const ��� �Լ��� �����Ͽ� ��ü�� �����͸� �������� ������ ���)
    void ShowPersonInfo() const
    {
        cout << "�̸�: " << name << endl; // ��ü�� �̸� ���
        cout << "����: " << age << endl; // ��ü�� ���� ���
    }

    // �Ҹ���: �������� �Ҵ�� �޸𸮸� ����
    ~Person()
    {
        delete[]name; // �������� �Ҵ�� �޸𸮸� ����
        cout << "called destructor!" << endl; // ��ü�� �Ҹ�� �� �޽��� ���
    }
};

int main(void)
{
    // Person Ŭ������ ��ü ���� �� �ʱ�ȭ
    Person man1("Lee dong woo", 29);
    Person man2("Yoon ji yul", 22);

    man2 = man1; // man1�� �����͸� man2�� ���� (���� ���� ����)

    man1.ShowPersonInfo(); // man1�� ���� ���
    man2.ShowPersonInfo(); // man2�� ���� ���

    return 0; // ���α׷� ����
}

/*
1.  Person Ŭ������ �����ϰ�, �� ���� Person ��ü�� �����Ͽ� ���� ������ �����ϴ� ����

2. Person Ŭ������ �̸��� ���̸� �����ϴ� ��� ������ ������, �����ڸ� ���� �ʱ�ȭ

3. ShowPersonInfo() �Լ��� ���� ��ü�� �̸��� ���̸� ���

4. ��ü�� �Ҹ��ڴ� �������� �Ҵ�� �޸𸮸� �����ϰ� �̸� ���� �޸� ������ ����
*/