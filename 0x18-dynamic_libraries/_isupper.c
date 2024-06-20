#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase or not
 *
 * @c: the character to check
 * Return: 1 if True, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
