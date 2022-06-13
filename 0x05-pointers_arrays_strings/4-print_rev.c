#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: string tp be print in reverse
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;
	char c;

	while (*(s + i))
		i++;
	i--;

	while (*(s + i))
	{
		c = *(s + i);
		_putchar(c);
		i--;
	}
	return ('\n');
}
