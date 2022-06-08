#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 0;
while (j < 10)
{
	while (i <= 'z')
	{
		_putchar(i);
		j++;
		i++;
	}
_putchar('\n');
}
}
