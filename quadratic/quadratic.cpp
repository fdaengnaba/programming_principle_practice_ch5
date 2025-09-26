#include <iostream>
#include "mymath.h"

int main()
{
	double a;
	double b;
	double c;

	std::cout << "Quadratic Equation Solver: ax^2 + bx + c = 0" << std::endl;
	std::cout << "Please enter a value for a: ";
	std::cin >> a;

	std::cout << "Please enter a value for b: ";
	std::cin >> b;

	std::cout << "Please enter a value for c: ";
	std::cin >> c;

	auto solution = abcf(a, b, c);

	switch (solution.type) {
	case SolutionType::TWO_REAL_SOLUTIONS:
		std::cout << "Result: Two real solutions found." << std::endl;
		std::cout << "x = " << solution.roots[0] << std::endl;
		std::cout << "x = " << solution.roots[1] << std::endl;
		break;
	case SolutionType::ONE_REAL_SOLUTION:
		std::cout << "Result: One real solution found." << std::endl;
		std::cout << "x = " << solution.roots[0] << std::endl;
		break;
	case SolutionType::NO_REAL_SOLUTION:
		std::cout << "Result: No real solutions exist." << std::endl;
		break;
	}
	return 0;
}