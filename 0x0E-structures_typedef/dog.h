#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a type with theree elements
 * @name: fisrt element
 * @age: second element
 * @owner: third element
 * Description: long desc
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
#endif
