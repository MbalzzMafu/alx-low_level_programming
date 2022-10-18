#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++);

	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
