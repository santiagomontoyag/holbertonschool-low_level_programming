#include "holberton.h"

/**
 * print_most_numbers - function for printing most numbers
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int s;
	for (s = '0'; s <= '9'; s++)
	{
	if (s != '2' && s != '4')
		_putchar (s);
	}
	_putchar ('\n');
}
