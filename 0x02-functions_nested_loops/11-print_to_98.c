#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers
 *
 * @n: start number
 *
 * Return: numbers
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		printf(", ");
	}
	printf("\n");
}
