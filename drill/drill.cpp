#include "std_lib_facilities.h"

int main()
{
	try {
		int x = 3;
		double d = 5 / (x - 2);
		if (d == 2 * x - 1) cout << "Success!\n";
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}