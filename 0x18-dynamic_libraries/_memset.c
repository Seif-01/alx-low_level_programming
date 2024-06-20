#include "main.h"
/**
 * *_memset - function description
 * @s: parameter 1
 * @b: parameter 2
 * @n: Parameter 3
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
