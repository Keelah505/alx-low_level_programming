#include <unistd.h>
#include "main.h"

/**
* _strcmp - copies n bytes of a string
* @s1: the destinatin string
* @s2:source string
* Returen: int
*/

int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int sr = 0;

	for (j = 0; s1[j] && s2[j]; j++)
	{
		if (s1[j] != s2[j])
		{
			sr = s1[j] - s2[j];
			break;
		}
	}
	return (sr);
}


