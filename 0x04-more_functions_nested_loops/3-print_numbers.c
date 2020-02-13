#include "holberton.h"

/**
 * print_numbers - function for printing numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int s;
	for (s = '0'; s <= '9'; s++)
	{
		_putchar (s);
	}
	_putchar ('\n');
}
