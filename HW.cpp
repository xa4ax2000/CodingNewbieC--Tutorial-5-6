#include <iostream>
#include <cmath>

using namespace std;

double temperatureConvert(double);

int main()
{
	double Celsius;
	cout << "Enter temperature in celsius: ";
	cin >> Celsius;

	double Farenheit = temperatureConvert(Celsius);
	cout << Celsius << " degrees celsius is equal to" << Farenheit << " degrees farenheit." << endl;
		
	system("pause");
	return 0;
}

double temperatureConvert(double F)
{
	double f = 1.8 * C + 32;
		return f;
}