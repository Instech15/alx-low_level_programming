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
 *dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
#endif
