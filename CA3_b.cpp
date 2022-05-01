/*
INT105
CA3
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question2
*/
#include <iostream>
using namespace std;

class Car
{
public:
    float horse_power, mileage;
    Car()
    {
        cout << "Enter mileage of the car: ";
        cin >> mileage;
        cout << "Enter horse power of the car: ";
        cin >> horse_power;
    }
    Car operator>(Car c)
    {
        if (mileage > c.mileage)
        {
            cout << "Mileage of car 1 is more" << endl;
        }
        else if (mileage == c.mileage)
        {
            cout << "Both cars have equal mileage" << endl;
        }
        else
        {
            cout << "Mileage of car 2 is more" << endl;
        }
        if (horse_power > c.horse_power)
        {
            cout << "Horse power of car 1 is more" << endl;
        }
        else if (horse_power == c.horse_power)
        {
            cout << "Both cars have same horse power" << endl;
        }
        else
        {
            cout << "Horse power of car 2 is more" << endl;
        }
    }
};

int main()
{
    cout << "Car 1" << endl;
    Car c1;
    cout << "Car 2" << endl;
    Car c2;
    cout << "\n";
    c1 > c2;
    return 0;
}