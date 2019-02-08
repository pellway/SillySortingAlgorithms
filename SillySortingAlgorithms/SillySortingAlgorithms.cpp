#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class SillySortingAlgorithms
{
	std::vector <int> StalinSort(std::vector <int> array)
	{
		// Deletes any elements out of order, returns a sorted list
		for (int i = 1; i < array.size(); i++)
		{
			if (array[i] < array[i - 1])
			{
				array.erase(array.begin() + i);
				i--;
			}
		}
		return array;
	}

	std::vector <int> GenghisKhanSort(std::vector <int> array)
	{
		// All elements become first element
		for (int i = 1; i < array.size(); i++)
		{
			array[i] = array[0];
		}
		return array;
	}

	std::vector <int> HitlerSort(std::vector <int> array)
	{
		// Delete elements different to the first element
		for (int i = 1; i < array.size(); i++)
		{
			if (array[i] != array[0])
			{
				array.erase(array.begin() + i);
				i--;
			}
		}
		return array;
	}

	std::vector <int> EmptySort(std::vector <int> array)
	{
		// An empty array is a sorted array
		std::vector <int> empty;
		array = empty;
		return array;
	}

	std::vector <int> ZenSort(std::vector <int> array)
	{
		// Acknowledge the order of the array doesn't matter
		return array;
	}

	std::vector <int> ThanosSort(std::vector <int> array)
	{
		// Delete half the array, population crisis is sorted
		int n = array.size();
		if (n % 2 == 0) n /= 2;
		else n = array.size() + 1;
		for (int i = 0; i < n; i++)
		{
			array.erase(array.begin() + i);
		}
		return array;
	}

	std::vector <int> CommunismSort(std::vector <int> array)
	{
		// All elements are equal to the average sum
		int avg, sum;
		for (int i = 0; i < array.size(); i++)
		{
			sum += array.size();
		}
		avg = sum / 2;
		for (int i = 0; i < array.size(); i++)
		{
			array[i] = avg;
		}
		return array;
	}

	std::vector <int> CapitalismSort(std::vector <int> array)
	{
		// Sort by highest to lowest, each smaller value is deducted 5%, which is added to the largest value
	}

	std::vector <int> QuantumSort(std::vector <int> array)
	{
		// randomise the list, if not sorted, print unlucky message, else return sorted array
	}

	std::string CheckSortedArray(std::vector <int> array)
	{

	}
};

int main()
{

	std::cout << CheckSortedArray(input) << std::endl;
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