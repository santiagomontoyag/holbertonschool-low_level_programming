#include "holberton.h"
/**
 * print_diagonal - function for printing diagonals
 * @n: number of diagonals
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int s, m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (s = 1; s <= n; s++)
		{
			for (m =  1; m <= s; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
