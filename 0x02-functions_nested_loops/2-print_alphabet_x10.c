#include "holberton.h"
/**
* print_alphabet_x10 - check the code for Holberton School students.
*
*
*/
void print_alphabet_x10(void)
{
	int s, m;

	for (m = 1; m <= 10; m++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
