#include <unistd.h>
#include "main.h"

/**
 * rot13- cpies n bytes of a string
 * @s: the desitination string
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	for (i = 0; s[i];i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
