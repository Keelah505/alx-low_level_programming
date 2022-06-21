#include <stdio.h>
#include "main.h"

/**
 * _strchr - fills memory with a constant byte
 * @s: the memory area to print in
 * @c: the meory to copy from
 * Return: r
 */

char *_strchr(char *s, char c)
{
	int i;
	int l;

	while (s[l])
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
	}
	return (0);
}
