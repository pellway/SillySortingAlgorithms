#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class SillySort
{
	public:
	std::vector <int> StalinSort(std::vector <int> array)
	{
		// Deletes any elements out of order, returns a sorted list
		for (int i = 1; i < array.size(); i++)
		{
			if (array[i] < array[i - 1])
			{
				array.erase(array.begin() + i-1);
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

	std::vector <int> RandomSort(std::vector <int> array)
	{
		// Randomise the list. If not sorted, repeat until array is sorted
		std::random_shuffle(array.begin(), array.end());
		for (int i = 1; i < array.size(); i++)
		{
			if (array[i - 1] > array[i])
				return RandomSort(array);
		}
		return array;
	}

	std::string CheckSortedArray(std::vector <int> array)
	{
		for (int i = 1; i < array.size(); i++)
		{
			if (array[i - 1] > array[i]) return "The array is not sorted";
		}
		return "The array is sorted";
	}

	void PrintArray(std::vector <int> array)
	{
		for (int i = 0; i < array.size(); i++)
		{
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
	}
};