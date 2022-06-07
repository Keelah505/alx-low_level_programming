#include <main.h>

/**
 *_islower - checks lowercase 
 *Return: 1 if lowercaase or 0 otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

