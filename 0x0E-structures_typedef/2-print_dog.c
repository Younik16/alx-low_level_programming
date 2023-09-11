#include <stdio.h>
#include "dog.h"
/* dog.h */
#ifndef DOG_H
#define DOG_H
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
/**
 * print_dog - Prints information about a struct dog
 * @d: Pointer to the struct dog variable to print
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
