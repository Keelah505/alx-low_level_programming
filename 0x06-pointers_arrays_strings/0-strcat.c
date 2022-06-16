#include <unistd.h>
#include "main.h"

/**
* _strcat - concatinates two strings
* @dest: the destination of the string
* @src: the source string
* Return: source string.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	for (j = 0; j <= i; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = src[j]

		return (dest);
}
