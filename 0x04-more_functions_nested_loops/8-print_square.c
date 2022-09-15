#include "main.h"

/**
 * print_square - function that prints a square,
 * followed by a new line
 * @size: size of square
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putcar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
