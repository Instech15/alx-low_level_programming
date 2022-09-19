#include <stdio.h>

int _atoi(char *);

/**
 * main - Converts strings to int
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _atoi("4");
	printf("%d\n", n);
	return (0);
}
