#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Retiurn: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name ==  NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d-> = "(nil)";

	printf("name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
