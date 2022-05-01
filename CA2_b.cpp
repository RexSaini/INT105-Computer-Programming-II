/*
INT105
CA2
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question2
*/
#include <iostream>
using namespace std;

class User
{
protected:
    string username, email;
    long long int balance, contact;

public:
    User()
    {
        cout << "Welcome to ABC Grocery store" << endl;
        cout << "Enter username: ";
        getline(cin, username);
        cout << "Enter email: ";
        getline(cin, email);
        cout << "Enter your contact number: ";
        cin >> contact;
        cout << "Enter opening balance: ";
        cin >> balance;
    }

    void list()
    {
        cout << "\nRice - Rs82 per kg" << endl;
        cout << "Sugar - Rs42 per kg" << endl;
        cout << "Mustard oil - Rs135 per litre" << endl;
        cout << "Wheat flour - Rs250 per bag of 10kgs" << endl;
    }

    void amount()
    {
        long long int bal;
        cout << "Enter balance you want to add or subtract: ";
        cin >> bal;
        balance += bal;
    }

    void show()
    {
        cout << "\nCustomer's username: " << username << endl;
        cout << "Customer's email: " << email << endl;
        cout << "Customer's contact number: " << contact << endl;
        cout << "Current balance: " << balance << endl;
    }

    ~User()
    {
        cout << "Your remaining balance was forwarded to your bank account" << endl;
        balance = 0;
        cout << "Balance: " << balance << endl;
    }
};

class Shopping : public User
{
public:
    void shop()
    {
        int a, p = 0, q = 0, r = 0, s = 0;
        char ans;
        long long int bill = 0;
        cout << "\nWelcome" << endl;
        do
        {
            cout << "Press 1 to buy 'Rice', 2 to buy 'Sugar', 3 to buy 'Mustard oil', 4 to buy 'Wheat flour':";
            cin >> a;
            switch (a)
            {
            case 1:
                cout << "Enter quantity of rice in kgs: ";
                cin >> p;
                bill += p * 82;
                break;
            case 2:
                cout << "Enter quantity of sugar in kgs: ";
                cin >> q;
                bill += q * 42;
                break;
            case 3:
                cout << "Enter quantity of mustard oil in litres: ";
                cin >> r;
                bill += r * 135;
                break;
            case 4:
                cout << "Enter quantity of wheat flour in bags: ";
                cin >> s;
                bill += s * 250;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
            }
            cout << "Press y to continue shopping, any other key to exit: ";
            cin >> ans;
        } while (ans == 'y' || ans == 'Y');
        cout << "Total bill = " << bill << endl;
        if (bill > balance)
        {
            cout << "Insufficient funds! " << endl;
            amount();
            cout << "Current balance: " << balance << endl;
            shop();
        }
        else
        {
            balance -= bill;
            cout << "Thank you for your patronage" << endl;
        }
    }
};

int main()
{
    Shopping s1;
    s1.show();
    s1.list();
    s1.shop();
    s1.show();
    return 0;
}