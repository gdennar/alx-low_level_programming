#include <stdio.h>

/**
 * main - this is the entry point
 * Description: this prints the size of various types
 * Return: 0
*/
int main(void)
{
printf("Size of a char is: %lu byte(s)\n", sizeof(char));
printf("Size of an int is: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
