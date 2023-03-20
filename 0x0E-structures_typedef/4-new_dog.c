#include <string.h>
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
	char *n_name, *n_owner;

	n_name = malloc((strlen(name) + 1) * sizeof(char));
	if (n_name == NULL)
		return (NULL);
	n_owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (n_owner == NULL)
		return (NULL);
	strcpy(n_name, name);
	strcpy(n_owner, owner);
	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	n_dog->name = n_name;
	n_dog->age = age;
	n_dog->owner = n_owner;

	return (n_dog);
}
