#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - struct dog.
 * @name: name of the dog char pointer.
 * @age: age of the dog, float number.
 * @owner: owner of the dog, char pointer.
 * Description: dog structure..
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
