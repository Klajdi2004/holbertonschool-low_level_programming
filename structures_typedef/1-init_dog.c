#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: string representing name of dog
 * @age: age of dog
 * @owner: string representing name of owner of dog
 * Return: nothingi
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
