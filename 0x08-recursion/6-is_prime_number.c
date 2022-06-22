#include "main.h"
/**
 * is_prime_number - returns 1 if int is a prime
 * number else return 0
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrim(n, n - 1));
}
/**
 * getNumPrim - function that gets if num is 0 or  1
 * @num: input number
 * @i: Variable
 * Return: int
 */

int getNumPrim(int num, int i)
{
	if (i == 1)
	return (1);	
	
	if (num % i == 0 && i > 0)
		return (0);
		return (getNumPrim(num, i - 1));
}
