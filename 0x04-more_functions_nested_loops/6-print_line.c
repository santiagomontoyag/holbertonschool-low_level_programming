#include "holberton.h"
/**
 * print_line - function that prints a line
 * @n: number of lines printed
 * Return: Always 0.
 */
void print_line(int n)
{
int s;

	for (s = 1; s <= n; s++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
