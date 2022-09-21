#include "main.h"

/**
 * reverse_array - reverses array contents
 *
 * @a: array content
 * @n: elements of array
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int data, temp;

	for (data = 0; data < n; data++)
	{
		n--;
		temp = a[data];
		a[data] = a[n];
		a[n] = temp;
	}
}
