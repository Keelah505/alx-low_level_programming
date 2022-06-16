#include <unistd.h>
#include "main.h"

/**
* _strncat - concatinates n bytes two strings
* @dest: the desitnation string
* @src: the source string
* @n: the num of char to concat
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
