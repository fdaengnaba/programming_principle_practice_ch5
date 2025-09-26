#include "mymath.h"
#include <cmath>

QuadraticSolution abcf(double a, double b, double c)
{
	QuadraticSolution result;
	double d = b * b - 4 * a * c;
	if (d > 0)
	{
		result.type = SolutionType::TWO_REAL_SOLUTIONS;
		double root1 = (-b + std::sqrt(d)) / (2 * a);
		double root2 = (-b - std::sqrt(d)) / (2 * a);
		result.roots = { root1, root2 };
	}
	else if (d == 0) {
		result.type = SolutionType::ONE_REAL_SOLUTION;
		double root = -b / (2 * a);
		result.roots = { root };
	}
	else {
		result.type = SolutionType::NO_REAL_SOLUTION;
	}
	return result;
}