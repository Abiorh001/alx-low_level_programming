#include "headers.h"

/**
 * print_last_digit - output last digit of a number
 * @n : number to check
 * Description: write a function that prints the last digit of a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (n < 0)
		result *= -1;
	_putchar(result + '0');
	return (result);

}
