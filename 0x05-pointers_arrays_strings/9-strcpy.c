#include "main.h"

/**
 * _strcpy - Copies a string pointed to @src, including
 * the terminating null byte
 *
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Retrun: A pointer to the string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
