#include "main.h"
/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 * @dest: copies to dest
 * @src: copies from src
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
