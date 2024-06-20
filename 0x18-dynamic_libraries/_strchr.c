#include "main.h"
/**
 * *_strchr - function description
 * @s: string parameter
 * @c: Character to locate
 * Return: Pointer to first occurrence of c inside s or NULL if c not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	if (s[i] == c)
	{
		return (i + s);
	}

	return (0);
}
