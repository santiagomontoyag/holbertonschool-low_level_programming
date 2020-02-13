#include "holberton.h"
/**
 * _isdigit - name of the function for cheking digits
 *
 * @c: variable we want to check
 * Return: it returs 1 or 0 if the variable is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
