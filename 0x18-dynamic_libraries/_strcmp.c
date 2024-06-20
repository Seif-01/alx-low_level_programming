#include "main.h"
/**
 * _strcmp - function description.
 *@s1: param string to compare.
 *@s2: param string another one to compare.
 *Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int comp_result = 0;

	for (; s1[i] != '\0'; i++)
	{
		if (s2[i] != '\0' && comp_result == 0)
		{
			comp_result = s1[i] - s2[i];
		}
	}

	return (comp_result);
}
