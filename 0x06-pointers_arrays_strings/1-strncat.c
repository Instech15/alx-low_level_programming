#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination variable
 * @src: source variable
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (co = 0; co < n; co++)
	{
	dest[i + co] = src[co];
	if (src[co] == '\0')
		co = n;
	}

	return (dest);
}
