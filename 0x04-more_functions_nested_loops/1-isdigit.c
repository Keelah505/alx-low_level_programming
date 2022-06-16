#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if c is digit
 * @c: integer to check
 * Return: on sucess 1
 */

int _isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}
