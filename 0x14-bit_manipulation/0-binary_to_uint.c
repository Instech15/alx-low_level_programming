
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;
	int n = 0;

	if (b == NULL)
		return (0);

	while (b[n] == '0' || b[n] == '1')
	{
		var << 1;
		var += b[n] - '0';
		n++;
	}
	return (var);
}
