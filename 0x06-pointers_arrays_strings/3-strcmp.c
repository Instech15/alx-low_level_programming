#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int value;

	for (value = 0; s1[value] != '\0' && s2[value] != '\0'; value++)
	{
		if (s1[value] != s2[value])
			return (s1[value] - s2[value]);
	}
	return (0);
}
