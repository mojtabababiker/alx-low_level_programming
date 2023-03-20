#include "dog.h"

/**
 * new_dog - Creat a new type of dog struct
 * @name: a pointer of new_dog name element
 * @age: copy of the new_dog age element
 * @owner: a pointer of new_dog owner element
 * Return: a pointer to the dog struct of the new_dog elements
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
