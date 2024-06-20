#include "main.h"
/**
 * _puts - code definition
 * @str: The string parameter
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
