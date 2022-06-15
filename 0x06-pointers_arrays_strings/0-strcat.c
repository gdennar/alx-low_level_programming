#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *cat;

	cat = strcat(dest, src);
	*cat = *dest;
		return (0);
}
