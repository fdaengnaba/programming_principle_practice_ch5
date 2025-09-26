#include <iostream>
#include <vector>
#include <string>

void print_error(const std::string& message) {
	std::cerr << "Error " << message << std::endl;
}

int main() {
	int n_to_process = 0;
	std::cout << "Please enter the number of values you want to process:" << std::endl;
	std::cin >> n_to_process;

	if (std::cin.fail() || n_to_process < 2) {
		print_error("Invalid input. You must enter a whole number greater than 1.");
		return 1;
	}

	std::cout << "Please enter some floating-point numbers (press '|' to stop) :" << std::endl;
	std::vector<double> numbers;
	double temp_value;

	while (std::cin >> temp_value) {
		numbers.push_back(temp_value);
	}

	if (static_cast<size_t>(n_to_process) > numbers.size()) {
		print_error("You asked for a sum of " + std::to_string(n_to_process) + " numbers, but only " +
			std::to_string(numbers.size()) + " were provided in the list.");
		return 1;
	}

	double sum = 0.0;
	for (int i = 0; i < n_to_process; ++i) {
		sum += numbers[i];
	}

	std::vector<double> differences;
	for (int i = 0; i < n_to_process - 1; ++i) {
		double diff = numbers[i + 1] - numbers[i];
		differences.push_back(diff);
	}


	std::cout << "\nThe sum of the first " << n_to_process << "numbers ( ";
	for (int i = 0; i < n_to_process; ++i) {
		std::cout << numbers[i] << " ";
	}
	std::cout << ") is " << sum << "." << std::endl;

	std::cout << "The " << differences.size() << " differences between the adjacent values are: ( ";
	for (double diff : differences) {
		std::cout << diff << " ";
	}
	std::cout << ")." << std::endl;

	return 0;
}