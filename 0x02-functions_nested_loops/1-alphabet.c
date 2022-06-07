#include <main.h>

/**
 *print_alphabet - check description
 *Description: It prints the alphabet in lowercase follwed by an new line
 *Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

	return (0);
}
