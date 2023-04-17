#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: variabe of type dog
 * @name: array of chars
 * @age: int
 * @owner: array of chars
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
