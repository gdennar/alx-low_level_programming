#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if charcter is letter, lower or upper case, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (C <= 'A' && C >= 'Z'))
		return (1);
	else
		return (0);
}
