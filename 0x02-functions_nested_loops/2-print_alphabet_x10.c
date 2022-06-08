#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 0;
while (i <= 'z')
{
	while (j <= 10)
	{
		_putchar(i);
		i++;
		j++;
	}
_putchar('\n');
}
