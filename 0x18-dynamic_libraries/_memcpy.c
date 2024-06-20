#include "main.h"
/**
 * _memcpy - function description
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: number of copy param
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	for (; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
