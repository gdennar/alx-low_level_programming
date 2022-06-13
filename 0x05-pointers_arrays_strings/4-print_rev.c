#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i];
		i--;
	}
	_putchar('\n');
}
