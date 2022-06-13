#include <unistd.h>
#include "main.h"

/**
* _strlen - checks the length of a sting
* @s: the string to check
* Return: return length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}

