#include "main.h"
/**
 * _strspn - function description
 * @s: string parameter
 * @accept: parameter named accept
 * Return: number of bytes initla segment of s with only bytes from `accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0;
	unsigned int a;
	int finder = 1;

	do {
		j = 0;
		a = k;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
			{
				j++;
			}
		}

		if (a == k)
		{
			finder = 0;
		}

		i++;
	} while (s[i] != '\0' && finder);

	return (k);
}
