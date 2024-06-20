#include "main.h"

/**
 * _abs - Prints the absolute value of a number.
 * @n: The number whose abs value will be printed.
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
