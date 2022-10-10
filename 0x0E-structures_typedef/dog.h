#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for char and float
 * @name: member1
 * @age: member2
 * @owner: member3
 *
 * Description: structure definition in C language
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * Prototypes
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
