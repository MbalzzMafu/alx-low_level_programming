#include "main.h"


/**
 * more_numbers - prints numbers to 14
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int num;
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}

		_putchar(10);
	}
}
