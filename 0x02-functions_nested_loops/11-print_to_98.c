#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -> prints all natural numbers from n to 98
 * @n: input number to check
 * Return: all numbers
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d\n", n);
	printf("\n");
}
