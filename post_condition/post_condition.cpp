#include <std_lib_facilities.h>
#include "math_functions.h";
#include <limits>

int main()
{
	try {
		int show = area(numeric_limits<int>::max() / 2, numeric_limits<int>::max() / 2);
		cout << show;
	}
	catch (exception &e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
}