#include "main.h"
#include <stdio.h>
/**
 * _abs - returns absolute value
 * @n : number to check
 * Description: write a function that computes the absolute value of an integer
 * Return: 0 or 1
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
