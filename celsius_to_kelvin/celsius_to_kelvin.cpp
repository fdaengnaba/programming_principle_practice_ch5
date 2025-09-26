#include <std_lib_facilities.h>

double ctok(double c)
{
	if (c < -273.15) error("pre-condition: no way a temperature that low\n");
	double k = c + 273.15;
	return k;
}

double ktoc(double k)
{
	if (k < 0) error("No way lower than 0K");
	double c = k - 273.15;
	return c;
}

int main()
{
	double temp = 0;
	char unit = ' ';
	cin >> temp >> unit;
	try {
		switch (unit)
		{
		case 'c':
			cout << ctok(temp) << "k\n";
			break;
		case 'k':
			cout << ktoc(temp) << "c\n";
			break;
		default:
			cerr << "Unit know known\n";
		}
	}
	catch (exception& e) {
		cerr << e.what();
	}
	catch (...) {
		cerr << "Error not known\n";
	}
}