#include "main.h"

/**
 * print_number - copie n bytes of a strng
 * @n: the desitnation string
 * Return: void
 */

void  print_number(int n)
{
	int div = 1;
	int l = n;
	int ld;
	int m = l;

	if (l < 0)
	{
		l = -l;
		_puthchar('-');
	}
	if (l < 9)
	{
		div = 0;
	}
	ld= 1 % 10;
	l = l / 10;
	while (l >= 10)
	{
		div *= 10;
		l /= 10;
	}
	for (; div != 0;div /= 10)
	{
		_putchar(m / div + '0');
		m %= div;
	}
	_putchar (ld + '0');
}
