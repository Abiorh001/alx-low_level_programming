#include "headers.h"

/**
 * print_last_digit - output last digit of a number
 * @n : number to check
 * Description: write a function that prints the last digit of a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int 1;

	1 = n % 10;
	if (1 < 0)
	{
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
		_putchar(1 + 48);
		return (1);
	}

}
