#include <iostream>
#include <vector>
#include <string>
#include <limits>

void print_error(const std::string& message) {
	std::cerr << "Error " << message << std::endl;
}

int main() {
	int n_to_sum = 0;
	std::cout << "Please enter the number of values you want to sum:" << std::endl;
	std::cin >> n_to_sum;

	if (std::cin.fail() || n_to_sum <= 0) {
		print_error("Invalid input. You must enter a positive whole number.");
		return 1;
	}

	std::cout << "Please enter some integers(press '|' to stop) :" << std::endl;
	std::vector<int> numbers;
	int temp_value;

	while (std::cin >> temp_value) {
		numbers.push_back(temp_value);
	}

	if (static_cast<size_t>(n_to_sum) > numbers.size()) {
		print_error("You asked for a sum of " + std::to_string(n_to_sum) + " numbers, but only " +
			std::to_string(numbers.size()) + " were provided in the list.");
		return 1;
	}

	long long sum = 0;
	for (int i = 0; i < n_to_sum; ++i) {
		sum += numbers[i];
	}

	if (sum > std::numeric_limits<int>::max() || sum < std::numeric_limits<int>::min()) {
		print_error("The calculated sum (" + std::to_string(sum) + ") is too large to be represented as a standard integer.");
		return 1;
	}

	std::cout << "\nThe sum of the first " << n_to_sum << "numbers ( ";
	for (int i = 0; i < n_to_sum; ++i) {
		std::cout << numbers[i] << " ";
	}
	std::cout << ") is " << sum << "." << std::endl;

	return 0;
}