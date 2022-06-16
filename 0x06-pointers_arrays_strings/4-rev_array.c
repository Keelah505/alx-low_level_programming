#include <stdio.h>
#include "main.h"

/**
* reverse_array - copies n bytes of a string
* @a: destinatin string
* @n : source string.
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux =0;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - i -1 ];
		a[n - i - 1] = aux;
	}
}

