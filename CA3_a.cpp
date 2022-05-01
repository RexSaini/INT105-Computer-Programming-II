/*
INT105
CA3
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question1
*/
#include <iostream>
#include <fstream>
using namespace std;

class Product
{
public:
    string name, code;
    long int quantity;
    char c;
    void get()
    {
        fflush(stdin);
        cout << "Enter product name: ";
        getline(cin, name);
        cout << "Enter product code: ";
        getline(cin, code);
        cout << "Enter quantity: ";
        cin >> quantity;
        c = '\n';
    }
    void display()
    {
        cout << "\nProduct name: " << name << endl;
        cout << "Product code: " << code << endl;
        cout << "Product quantity: " << quantity << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product *ptr = new Product[n];
    Product e;
    fstream file;
    file.open("productDetails.txt", ios::out);
    for (int i = 0; i < n; i++)
    {
        cout << "Product " << (i + 1) << endl;
        ptr[i].get();
        file.write((char *)&ptr[i], sizeof(ptr[i]));
    }
    file.close();
    file.open("productDetails.txt", ios::in);
    file.seekg(0);
    file.read((char *)&e, sizeof(e));
    cout << "\nDisplaying details" << endl;
    while (file.eof() == 0)
    {
        e.display();
        file.read((char *)&e, sizeof(e));
    }
    file.close();
    return 0;
}
