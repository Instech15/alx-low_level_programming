#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: nothing
 * Description - a function that checks the endianness.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
