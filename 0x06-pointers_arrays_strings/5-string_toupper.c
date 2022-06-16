#include <stdio.h>
#include "main.h"

/**
* string_toupper - cpies n bytes of a string
* @s: the destination string
* Return: s
*/

char *string_toupper(char *s)
{
	int i = 0;
	int j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
			s[j] -= 32;
	}
	return (s);
}
