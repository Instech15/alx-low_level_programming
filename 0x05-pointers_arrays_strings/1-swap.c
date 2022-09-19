#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: int one
 * @b: int two
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int number;

	number = *a;
	*a = *b;
	*b = number;
}
