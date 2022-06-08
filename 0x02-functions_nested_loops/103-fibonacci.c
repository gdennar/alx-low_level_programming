#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);
	return (0);
}
