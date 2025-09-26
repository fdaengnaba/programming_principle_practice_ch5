#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	if (n < 3)
	{
		std::cerr << "n less than 3";
	}

	std::vector<int> fibonacci(n);
	fibonacci[0] = 1;
	fibonacci[1] = 1;

	for (int i = 2; i < fibonacci.size(); ++i)
	{
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
	}

	for (int i : fibonacci)
	{
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}