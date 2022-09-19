#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: The string
 *
 * Return: Lenght
 */

int _strlen(char *s)
{
	int count = 1, sum = 0;
	char name = s[0];

	while (name != '\0')
	{
		sum++;
		name = s[count++];
	}

	return (sum);
}
