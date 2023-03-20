#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct dog - Contains dog informations
 * @age: age of the dog in float point
 * @name: name of the dog
 * @owner: dog owner
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

/**
 * typedef dig_t - Typedef for the struct dog
 */

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
