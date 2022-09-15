#include "main.h"
/**
 * _isupper - checks for uppercase
 *
 * Return: returns 1 if c is uppercase
 * returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	return(0);
}
