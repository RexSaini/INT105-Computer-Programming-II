// Function overloading
#include <iostream>
using namespace std;

class Geometry
{
	float radius, length, height;

public:
	void area(float r)
	{
		radius = r;
		cout << "\nThe area is " << 3.14 * radius * radius;
	}
	void area(float l, float h)
	{
		length = l;
		height = h;
		cout << "\nThe area is " << 0.5 * length * height;
	}
};

int main()
{
	Geometry g;
	float l, h, r;
	int n;
	char ans;
	do
	{
		cout << "\nEnter 1 for area of circle, 2 for triangle: ";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "\nEnter radius: ";
			cin >> r;
			g.area(r);
			break;
		case 2:
			cout << "\nEnter height: ";
			cin >> h;
			cout << "\nEnter length: ";
			cin >> l;
			g.area(l, h);
			break;
		default:
			cout << "\nInvalid input";
			break;
		}
		cout << "\nPress y to run again...";
		cin >> ans;
	} while (ans == 'y');
}
