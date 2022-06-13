#include <unistd.h>
#include "main.h"

/**
* swap_int - swaps two int
* @a: int to swap
* @b: int to swap
* Return: void
*/

void swap_int(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
