#include "search_algos.h"

/**
* linear_search - a function to perform linear search algorithmn
* @array: a pointer to the first element on the array
* @size: size of the array
* @value: the value to search for in the array
* Return: the index if it's success, -1 if it fails.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
