#pragma once

#include <vector>

enum class SolutionType {
	NO_REAL_SOLUTION,
	ONE_REAL_SOLUTION,
	TWO_REAL_SOLUTIONS
};

struct QuadraticSolution {
	SolutionType type;
	std::vector<double> roots;
};

QuadraticSolution abcf(double a, double b, double c);