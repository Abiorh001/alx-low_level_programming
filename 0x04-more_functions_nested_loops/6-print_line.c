#include "main.h"
/**
 * print_line - function that draws a straight lines in the terminal
 * @n: lenght of line
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
