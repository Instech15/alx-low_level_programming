#include "main.h"

/**
 * create_array - prints buffer in hexa
 * @size: the size of the memory to print
 * @c: ...
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *s = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
