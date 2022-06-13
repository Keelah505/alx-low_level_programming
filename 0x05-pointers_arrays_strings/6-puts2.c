#include <stdio.h>
#include"main.h"

/**
* puts2 - prints every other char of a string
* @str: the string to printt
* Return: void
*/

void puts2(char *str)
{
	int i = 0;
	char c;

	while (*(str + i))
	{
		c = *(str + i);
		_putchar(c);
	}
	{
		i++;
	}
	_putchar('\n');
}

