#include <iostream>
#include <vector>
#include <limits>

std::vector<long long> fibonacci(int n)
{
	if (n < 3)
	{
		throw std::runtime_error("n less than 3");
	}

	std::vector<long long> result(n);
	result[0] = 1;
	result[1] = 1;

	for (int i = 2; i < result.size(); ++i)
	{
		result[i] = result[i - 2] + result[i - 1];
	}

	return result;
}

int main()
{
	for (int i = 3; i < std::numeric_limits<int>::max(); ++i)
	{
		std::vector<long long> result = fibonacci(i);
		if (result[result.size() - 1] > std::numeric_limits<int>::max())
		{
			std::cout << "The largest fibonacci that fits in an int is: " << result[result.size() - 2] << std::endl;
			break;
		}
	}
	
}