#include "main.h"

/**
*_islower - checks lowercase
*Return: 1 if lowercaase or 0 otherwise
*/

int _islower(int c)
{
	char i;
	char value;
	int lower = 0;

	value = c;
	lower = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == value)
			lower = 1;
	}

	return (lower);
}

