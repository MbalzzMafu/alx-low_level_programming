#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: 0 on success
 */

int main(void)
{
	int iter;

	for (iter = 1; iter <= 100; iter++)
	{
		if ((iter % 3) == 0)
			printf("Fizz");

		if ((iter % 5) == 0)
			printf("Buzz");

		if (((iter % 3) != 0) && ((iter % 5) != 0))
			printf("%d", iter);

		if (iter < 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
