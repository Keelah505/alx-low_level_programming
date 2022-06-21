#include <stdio.h>
#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: the memory area to print in
 * @src: the memory to copy from
 * @n: the num of bytes to copy
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

