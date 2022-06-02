#include <stdio.h>

/**
 * main - this is the entry point
 * Description: this prints the size of various types
 * Return: 0
*/
int main(void)
{
printf("Size of a char is: %i byte(s)\n", sizeof(char));
printf("Size of an int is: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", (sizeof(long long));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
