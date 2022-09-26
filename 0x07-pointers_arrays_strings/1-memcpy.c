#include "main.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Amount to copy from memory area
 *
 * Return: Pointer to area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
