#include "main.h"
/**
 * is_prime_number - returns 1 if int is a prime
 * number else return 0
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (1);
	else
		return (0);
}
