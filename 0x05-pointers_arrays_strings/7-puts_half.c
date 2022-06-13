#include "main.h"

/**
* puts_half - prints second half of a string
* @str: string to print
* Return: none
*/

void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; str[i]; i++)
		;
	k = i;
	i = i / 2;

	for (k % 2 != 0;)
		i++;
	for (j = 0; j < k; j++)
	{
		if (j >= i)
			_putchar(str[j]);
	}
	_putchar('\n');
}
