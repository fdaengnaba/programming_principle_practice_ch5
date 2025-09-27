// bulls_cows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <string>

std::vector<int>  generateSecretNumber()
{
	std::vector<int> digits = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::random_device rd;
	std::mt19937 engine(rd());

	std::shuffle(digits.begin(), digits.end(), engine);

	return { digits[0], digits[1], digits[2], digits[3] };
}

std::vector<int> getUserGuess()
{
	std::vector<int> guess;
	std::string input;

	while (true) {
		std::cout << "Enter your 4-digit guess: ";
		std::cin >> input;

		if (input.length() != 4)
		{
			std::cout << "Invalid input. Please enter exactly 4 digits." << std::endl;
			continue;
		}

		bool isValid = true;
		guess.clear();
		for (char c : input)
		{
			if (!isdigit(c))
			{
				std::cout << "Invalid input. Please enter only digits." << std::endl;
				isValid = false;
				break;
			}
			guess.push_back(c - '0');
		}

		if (isValid)
		{
			break;
		}
	}
	return guess;
}


int main()
{
	std::cout << ""
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
