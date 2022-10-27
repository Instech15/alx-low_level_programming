#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	for (n = 0; n > 1; n++)
	{
		print_binary(n);
	}
}
