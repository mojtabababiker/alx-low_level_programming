#ifndef DOG_H
#define DOG_H

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
 * dig_t - Typedef for the struct dog
 */

typedef struct dog dog_t;
