#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 followed by new line but do not print 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
			i++
		}
	}
	_putchar('\n');
}
