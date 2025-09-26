#include <std_lib_facilities.h>
#include <limits>

int main()
{
	double sum = 0;
	double high_temp = numeric_limits<double>::lowest();
	double low_temp = numeric_limits<double>::max();
	int no_of_temp = 0;

	for (double temp; cin >> temp;)
	{
		++no_of_temp;
		sum += temp;
		if (temp > high_temp) high_temp = temp;
		if (temp < low_temp) low_temp = temp;
	}

	cout << "High temperature: " << high_temp << '\n';
	cout << "Low temperature: " << low_temp << '\n';
	cout << "Average temperature: " << sum / no_of_temp << '\n';
}