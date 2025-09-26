#include <std_lib_facilities.h>

double ctok(double c)
{
	double k = c + 273.15; // narrowing
	return k; // return expect double
}

int main()
{
	double c = 0;
	cin >> c;
	double k = ctok(c); // a char???
	cout << k << '\n'; // it should be cout, 
}