#include "holberton.h"
/**
 * print_square - function for printing diagonals
 * @size: number of diagonals
 * Return: Always 0.
 */
void print_square(int size)
{
int s, m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (s = 1; s <= size; s++)
		{
			for (m =  1; m <= size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

