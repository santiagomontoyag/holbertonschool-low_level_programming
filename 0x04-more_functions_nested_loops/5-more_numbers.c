#include "holberton.h"
/**
 * more_numbers - function for printing nimbers from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int s, m;

	for (m = 1; m <= 10; m++)
	{
		for (s = 0; s <= 14; s++)
		{
		if (s > 9)
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
		}
		_putchar('\n');
	}
}
