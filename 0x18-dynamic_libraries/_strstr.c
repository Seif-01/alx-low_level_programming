#include "main.h"
/**
 * _strstr - find a string in a string.
 * @haystack: first string.
 * @needle: second string.
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int needle_size = 0, i = 0, j, i2;
	unsigned int find_holder;

	while (needle[needle_size] != '\0')
	{
		needle_size++;
	}

	do	{
		i2 = i;
		find_holder = 0;
		for (j = 0; j < needle_size; j++)
		{
			if (haystack[i2] == needle[j])
			{
				i2++;
				find_holder++;
			}
		}
		if (find_holder == needle_size)
		{
			return (haystack + i);
		}

		i++;
	} while (haystack[i] != '\0');

	return (0);

}
