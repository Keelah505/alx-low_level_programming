#include "main.h"
/**
* times_table - print tables
* Return: void
*/
void times_table(void)
{
	int x, j, y, d, e;

	for (x = 0; x < 10; x++)
	{
		for (j = 0; j < 10; j++)
		{
			y = x * j;
			d = y / 10;
			e = y % 10;
			if (j == 0)
			{
				_putchar('0')'
			}
			else if (y < 10)
			{
				_putchar(' ');
				_putchar('0' + e);
			}
			else
			{
				_putchar('0' + d);
				_putchar('0' + e);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar ('\n');
			}
		}
	}
}
