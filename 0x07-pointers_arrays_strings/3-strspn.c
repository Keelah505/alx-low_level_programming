#include <stdio.h>
#include "main.h"

/**
* _strspn - fills memory with a constant byte
* @s: the memory ara to print in
* @accept: the mmory to copy from
* Reurn: r
*/

unsignd int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int r = 0;

	for (i = 0; s[i] && !(s[i] == ' '); i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				r++;
			}
		}
	}
	return (r);
}
