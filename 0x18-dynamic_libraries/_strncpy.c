#include "main.h"
/**
 * *_strncpy - function description
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of chars from src
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (n > j)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		else
		{
			for (; j < n; j++)
			{
				dest[i] = '\0';
				i++;
			}
		}

	}
	return (dest);
}
