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
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + 1) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
