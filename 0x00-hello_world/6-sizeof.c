#include <stdio.h>

/**
 * main - Prints the size of variable types
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu byte\n", sizeof(long int));
	printf("Size of a long long int: %zu byte\n", sizeof(long long int));
	printf("Size of a float: %zu byte\n", sizeof(float));

	return (0);

}
