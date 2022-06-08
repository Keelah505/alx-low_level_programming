#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print n to 98
* @n: integer
* Return: void
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	putchar("98\n");
}
