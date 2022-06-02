#include <stdio.h>

/**
 * main - this is the entry point
 * Description: this prints the size of various types
 * Return: 0
*/
int main(void)

char char_size
int int_size
long int long_int_size
long long int long_long_int
float float_size

{
printf("Size of a char is: %lu byte(s)\n", sizeof(char_size));
printf("Size of an int is: %lu byte(s)\n", sizeof(int_size));
printf("Size of a long int: %lu byte(s)\n", sizeof(long_int_size));
printf("Size of a long long int: %lu byte(s)\n", (sizeof(long_long_int));
printf("Size of a float: %lu byte(s)\n", sizeof(float_size));
return (0);
}
