#include <stdio.h>

/**
 * _isdigit - checks if a character is digit or not
 *
 * @c: the character to check
 * Return: 1 if True, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
