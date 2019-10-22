#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - struct dog.
 * @name: name of the dog char pointer.
 * @age: age of the dog, float number.
 * @owner: owner of the dog, char pointer.
 * Description: dog structure..
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

#endif /* DOG_H */
