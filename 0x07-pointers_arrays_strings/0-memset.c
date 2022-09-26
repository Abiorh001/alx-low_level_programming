#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constand byte @c.
 * @s: A pointer to the memory are to be filled.
 * @b: The character to be fill the memory are with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to be filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
