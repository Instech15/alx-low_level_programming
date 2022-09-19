#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy destination
* @src: copy source
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		if (src[i] != 0)
		dest[i] = src[i];
	}
	return (dest);
}
