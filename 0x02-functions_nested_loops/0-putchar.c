#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the characteer to print
 *
 *Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return	(write(1, &c, 1));
}
