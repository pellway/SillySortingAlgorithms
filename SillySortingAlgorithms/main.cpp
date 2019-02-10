#include "pch.h"
#include "SillySort.hpp"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector <int> input;
	for (int i = 0; i < 5; i++)
	{
		input[i] = i;
	}
	input[2] = 15;
	SillySort.PrintArray(int* input);
	std::string check = SillySort.CheckSortedArray(input);
	std::cout << check << std::endl;
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