#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *@c: parameter
 * Return: Always 0.
 */

int _isupper(int c)
{
	int c = 'A';

	if (c <= 'Z')
		return (1);
	else
		return (0);
}
