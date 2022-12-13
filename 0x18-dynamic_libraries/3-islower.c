#include "headers.h"
/**
 * _islower - check if a charcater is lower
 * @c : charcater to check the case
 * Description: check if a charcater is lower caser
 * Return: throws 1 else throws 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
