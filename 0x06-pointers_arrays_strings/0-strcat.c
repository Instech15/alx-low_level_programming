#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @src: Source variable
 * @dest: Destination variable
 * Return: src value
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
