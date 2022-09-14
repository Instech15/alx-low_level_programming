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
	if (n < 98)
	{
		while (n <= 98)
		{

		printf("%d", n);
		if (n != 98)
		{
		printf(", ");
		}
		n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
	printf("98");
	}
	printf("\n");
}
