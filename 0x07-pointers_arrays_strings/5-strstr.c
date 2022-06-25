#include "main.h"
#include <stdio.h>

/**
 * _strstr - find 1st vence of substringneedlein haystack
 * @haystack: string
 * @needle: substrng to look for
 * Return: pointer of the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j;
	int v = 0;
	char *r;

	while (haystack[i])
	{
		if (needle[0] == '\0')
		{
			return (haystack);
		}
		if (needle[0] == haystack[i])
		{
			v = 1;
			r = &haystack[i];
			j = 0;
			while (needle[j] && haystack[i])
			{
				if (needle[j] == haystack[i])
				{
					v = 1;
					i++;
					j++;
				}
				else
				{
					v = 0;
					break;
				}
			}
			if (v == 1)
			{
			return (r);
			}
		}
		i++;
	}
	return (0);
}
