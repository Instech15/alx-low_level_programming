#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @src: Source variable
 * @dest: Destination variable
 * Return: src value
 */

char *_strcat(char *dest, char *src)
{
	strcat(src, dest);
	_putchar(dest);

	return (dest);
}
