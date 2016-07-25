#include <iostream>
#include <cmath>

using namespace std;

int feetToInches(int);

int main()
{
	int feet;
	cout << "Enter the amount in feet: ";
	cin >> feet;
	int inches = feetToInches(feet);
	cout << feet << "feet is equal to" << inches << "inches." << endl;
	system("pause");

	return 0;
}

int feetToInches(int f)
{
	return 12 * f;
}