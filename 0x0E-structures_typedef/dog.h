#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 * @name: parameter1
 * @age: parameter2
 * @owner: parameter3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dogy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
