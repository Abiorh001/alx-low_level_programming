#include "main.h"

/**
 * print_sign - Evaluate sign of number
 * @n: number to be checked
 * Description: write a function that prints sign of a number
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		test = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		test = 0;
	}
	else
	{
		_putchar('-');
		test = 1;
	}
	return (test);
}
