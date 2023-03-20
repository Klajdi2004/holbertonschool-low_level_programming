#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 *
 * Description: This function prints the contents of a struct dog, including
 * its name, age, and owner. If any of these fields are NULL, it prints (nil)
 * instead of the actual value.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: ");
	if (d->age == 0)
		printf("0.000000\n");
	else
		printf("%.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
