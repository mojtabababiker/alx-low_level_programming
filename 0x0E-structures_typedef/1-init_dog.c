#include "main.h"

/**
 * init_dog - use to initialize sturct dog elements
 * @d: struct of dog
 * @name: pointer for the name element in d struct
 * @age: a copy of age element in d stuct
 * @owner: pinter for the owner element in d struct
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
