#include "main.h"
/**
 * _strlen - code definition
 * @s: The string parameter
 * Return: The length of s
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
	{
		len += 1;
	}

	return (len);
}
