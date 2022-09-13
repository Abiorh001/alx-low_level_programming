#include "main.h"
/**
 * _isalpha - check if a letter is lowercase and uppercase
 * @c : letter to be checked
 * Description: write a function that check for alphabetic character
 * Return: 1 else 0
 */

int _isalpha(int c)
{
	if ((c == 97 && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
