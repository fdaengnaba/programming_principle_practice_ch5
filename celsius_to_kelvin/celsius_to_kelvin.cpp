#include <std_lib_facilities.h>

double ctok(double c)
{
	if (c < -273.15) error("pre-condition: no way a temperature that low\n");
	double k = c + 273.15;
	return k;
}

int main()
{
	double c = 0;
	cin >> c;
	try {
		double k = ctok(c);
		cout << k << '\n';
	}
	catch (exception& e) {
		cerr << e.what();
	}
	catch (...) {
		cerr << "Error not known\n";
	}
}