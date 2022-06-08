#include "main.h"

/**
* print_alphabet - check description
* Description: It prints the alphabet in lowercase follwed by an new line
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

	return (0);
}
