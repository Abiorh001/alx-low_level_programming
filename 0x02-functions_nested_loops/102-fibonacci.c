#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the first 50 fibanacci
 * numbers, strating with 1 and 2
 *
 * Return: ALways 0
 */
int main(void)
{
	long int i, prev, next, ans;

	prev = 1;
	next = 1;
	ans = prev + next;
	printf("%ld, %ld, ", next, ans);
	for (i = 1;  <= 48; i++)
	{
		prev = next;
		next = ans;
		ans = prev + next;
		if (i == 48)
		{
			printf("%ld\n", ans);
		}
		else
		{
			printf("%ld, ", ans);
		}
	}
	return (0);
}
