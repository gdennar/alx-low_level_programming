#include <stdio.h>

/**
 * main - this is the entry point
 * Description: this prints the size of various types
 * Return: 0
*/
int main(void)
{
int int_size;
char char_size;
float float_size;
double double_size;

printf("The size of an int is: %lu.\n", sizeof(int_size));
printf("The size of a char is: %lu.\n", sizeof(char_size));
printf("The size of a float is: %lu.\n", sizeof(float_size));
printf("The size of a double is: %lu.\n", sizeof(double_size));
return (0);
}
