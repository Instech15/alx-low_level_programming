#include "main.h"
#include "dog.h"
/**
 * main - initializes a variable of type struct dog.
 * In .c files, struct definition is avoided.
 * @d: ...
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
int main(void)
{
	struct dog dogi;

	dogi.name = "Bimgo";

	return (0);
}
