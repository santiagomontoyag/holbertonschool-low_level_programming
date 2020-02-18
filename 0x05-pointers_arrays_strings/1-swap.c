#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: variable we want to swap
 * @b: variable we want to swap
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
