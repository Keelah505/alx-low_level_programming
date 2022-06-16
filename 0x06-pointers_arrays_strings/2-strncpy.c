#include <unistd.h>
#include "main.h"

/**
* _strncpy - copies n bytes of a string
* @dest: destination string
* @src: the source string
* @n: the number of char to copy
* Return: dest
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
