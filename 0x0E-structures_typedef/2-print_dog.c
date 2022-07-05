#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog if
 * available or nil if element is NUll
 * @d: dog name
 * Description: prints all struct dog element
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age < 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
