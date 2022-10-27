#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: bit
 * @index: location to get bit  value from
 *
 * Return: the value of the bit at index index or -1 if an error occured
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 0))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
