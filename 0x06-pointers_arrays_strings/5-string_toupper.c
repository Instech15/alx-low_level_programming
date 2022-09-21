#include "main.h"

/**
 * *_string_toupper - changes lowercase of a string to upper
 * @n: the input string
 *
 * Return: uppercase string
 */

char *string_toupper(char *n)
{
	int data;

	for (data = 0; n[data] != '\0'; data++)
	{
		if (n[data] >= 'a' && n[data] <= 'z')
			n[data] = n[data] - 32;
	}
	return (n);
}
