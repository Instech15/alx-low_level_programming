#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: Pointer
 * @n: Element
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < (n - 1); arr++)
		printf("%d, ", a[arr]);
	if (arr == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
