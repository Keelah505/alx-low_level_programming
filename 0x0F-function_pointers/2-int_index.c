#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input intger array
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * to compare vlue
 *
 * Rteurn:index of the first element for which the cmp
 * function des not return 0. if no elements matches,
 * return -1. if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-10);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (1);
	}
	return (-1);
}
