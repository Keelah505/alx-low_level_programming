#include "main.h"

/**
* puts_half - prints second half of a string
* @str: string to print
* Return: none
*/

void puts_half(char *str)
{
	int i = 0;
	int j;
	char c;
	
	while (*(str + i))
		i++;
	
	for (j = i / 2; j <= i; j++)
	{
		c = *(str + j);
		_putchar(c);
		j++;
	}
}
