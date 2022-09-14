#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_times_table(int n)
{
	int multi;

	for (int i = 0; i <= 15; i++)
	{
		if (n > 15 || n < 0)
		{
			printf("Do nothing");
		}
		else
		{
			multi = n * i;
			printf("%d * %d = %d", n, i, multi);
		}
	}
}
