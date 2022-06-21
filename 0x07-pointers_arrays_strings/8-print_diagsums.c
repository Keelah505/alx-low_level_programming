#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints diagsums
 * @a: the memory area to print from
 * @sixe the memory rea to print in
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int r1 = 0;
	int r2 = 0;

	for (i = 0; i < size; i++)
	{
		r1 += a[i * size + i];
		r2 += a[(i * size) + (size - 1 - i)];
	}
	printf("%d, %d\n", r1, r2);
}


