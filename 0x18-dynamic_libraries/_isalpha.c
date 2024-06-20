#include "main.h"

/**
 * _isalpha - function description
 * @c: the subject test character
 *
 * Return: 1 if lowercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
