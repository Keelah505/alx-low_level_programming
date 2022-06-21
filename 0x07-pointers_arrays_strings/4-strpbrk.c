#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - fills memory with a constant byte
 * @s: the memory tp print in
 * @accept: the memory tocopy fromm
 * Return: r
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&(s[i]));
		}
	}
	return (0);
}

