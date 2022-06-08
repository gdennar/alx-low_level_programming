#include "main.h"
/**
 * print_to_98 -> prints all natural numbers from n to 98
 * @n: input number to check
 * Return: all numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n = 0; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
}
