#include <stdio.h>
#include <stdlib.h>

/**
 * main - return lower case and upper case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	{
		putchar('\n');
		return (0);
	}
