#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * @num: bit
 * @endian: pointer
 *
 *Return: nothing
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *) &num;

	if (*endian == 1)
		return (1);
	return (0);
}
