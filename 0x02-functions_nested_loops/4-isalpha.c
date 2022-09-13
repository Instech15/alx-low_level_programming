#include "main.h"
/**
 * _isalpha - checks for alphabets
 *
 * @c: character to be checked
 *
 * Return: 1 Always if c is a letter, lower or uppercase
 * return 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
