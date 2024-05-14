/*
File : ProductManager.cpp
Created : 2024.03.27
Author : ����
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Product {
protected:
    int id;
    double price;
    string producer;
public:
    Product(int _id, double _price, string _producer) : id(_id), price(_price), producer(_producer) {}
    virtual void printInfo() const {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << endl;
        cout << endl;
    }
    int getID() const {
        return id;
    }
    virtual ~Product() {}
};
class Book : public Product {
private:
    string ISBN;
    string author;
    string title;
public:
    Book(int _id, double _price, string _producer, string _ISBN, string _author, string _title)
        : Product(_id, _price, _producer), ISBN(_ISBN), author(_author), title(_title) {}
    void printInfo() const override {
        Product::printInfo();
        cout << "ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << endl;
    }
};
class Handphone : public Product {
private:
    string model;
    int ram;
public:
    Handphone(int _id, double _price, string _producer, string _model, int _ram)
        : Product(_id, _price, _producer), model(_model), ram(_ram) {}
    void printInfo() const override {
        Product::printInfo();
        cout << "Model: " << model << ", RAM: " << ram << "GB" << endl;
    }
};
class Computer : public Product {
private:
    string model;
    string cpu;
    int ram;
public:
    Computer(int _id, double _price, string _producer, string _model, string _cpu, int _ram)
        : Product(_id, _price, _producer), model(_model), cpu(_cpu), ram(_ram) {}
    void printInfo() const override {
        Product::printInfo();
        cout << "Model: " << model << ", CPU: " << cpu << "GB" << ", RAM: " << ram << "GB" << endl;
    }
};
void addProduct(vector<Product*>& products);
void printProducts(const vector<Product*>& products);
void searchProduct(const vector<Product*>& products);

int main() {
    vector<Product*> products; 
    int choice;
    while (true) {
        cout << "��ǰ���� ���α׷�" << endl;
        cout << "1. ��ǰ�߰� 2. ��ǰ��� 3. ��ǰ�˻� 0. ����" << endl;
        cout << "����: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
        case 0: 
            for (auto& product : products) {
                delete product;
            }
            return 0;
        case 1: 
            addProduct(products);
            break;
        case 2: 
            printProducts(products);
            break;
        case 3: 
            searchProduct(products);
            break;
        default:
            cout << "�߸��� �����Դϴ�. �ٽ� �������ּ���." << endl;
            break;
        }
    }

    return 0;
}
void addProduct(vector<Product*>& products) {
    int productType;
    cout << "1. å 2. �ڵ��� 3. ��ǻ��" << endl;
    cout << "��ǰ ���� ����: ";
    cin >> productType;
    cout << endl;

    int id;
    double price;
    string producer;
    cout << "ID: ";
    cin >> id;
    cout << "Price: ";
    cin >> price;
    cout << "Producer: ";
    cin >> producer;

    if (productType == 1) { 
        string ISBN, author, title;
        cout << "ISBN: ";
        cin >> ISBN;
        cout << "Author: ";
        cin >> author;
        cout << "Title: ";
        cin >> title;
        cout << endl;
        products.push_back(new Book(id, price, producer, ISBN, author, title));
    }
    else if (productType == 2) { 
        string model;
        int ram;
        cout << "Model: ";
        cin >> model;
        cout << "RAM: ";
        cin >> ram;
        cout << endl;
        products.push_back(new Handphone(id, price, producer, model, ram));
    }
    else if (productType == 3) { 
        string model, cpu;
        int ram;
        cout << "Model: ";
        cin >> model;
        cout << "CPU: ";
        cin >> cpu;
        cout << "RAM: ";
        cin >> ram;
        cout << endl;
        products.push_back(new Computer(id, price, producer, model, cpu, ram));
    }
}
void printProducts(const vector<Product*>& products) {
    cout << "��ǰ ���" << endl;
    for (const auto& product : products) {
        product->printInfo();
        cout << endl;
    }
}
void searchProduct(const vector<Product*>& products) {
    cout << "��ǰ �˻�" << endl;
    int searchId;
    cout << "�˻��� ��ǰ�� ID�� �Է��ϼ���: ";
    cin >> searchId;
    cout << endl;
    bool found = false;
    for (const auto& product : products) {
        if (product->getID() == searchId) {
            product->printInfo();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "�ش� ID�� ��ǰ�� ã�� �� �����ϴ�." << endl;
        cout << endl;
    }
}