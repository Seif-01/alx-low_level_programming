#include "main.h"
/**
 * *_strcpy - function description
 * @dest: destination string to copy to
 * @src: string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
