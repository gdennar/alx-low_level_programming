#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase
 * Return (0)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	putchar("%c\n", ch)
		ch++;
}
putchar(ch);
return (0);
}
