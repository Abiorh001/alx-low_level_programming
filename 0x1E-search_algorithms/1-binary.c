#include "search_algos.h"

/**
* binary_search - a function to execute binary search algorithm
* @array: a pointer to the first element in the array
* @size: size of the array
* @value: the value to search for in the array
* Return: the index if it's success, and -1 if it fails
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i, mid;

	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i < high; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[high]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
