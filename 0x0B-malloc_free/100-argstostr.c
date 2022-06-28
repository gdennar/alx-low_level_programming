#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int i, j, cont;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			cont++;
		}
		count++;
	}
	cont += 1;
	ar = malloc(cont * sizeof(char));
	if (ar == NULL)
		free(ar);
		return (NULL);
	str = ar;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ar = av[i][j];
			j++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}
