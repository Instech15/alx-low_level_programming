#include "main.h"
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - initializes a variable of type struct dog.
 * In .c files, struct definition is avoided.
 * @d: the struct to be initialized
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		dog.name = name;
		dog.age = age;
		dog.owner = owner;

	}
}
