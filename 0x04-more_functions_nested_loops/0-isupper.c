#include "holberton.h"
/**
 * _isupper - name of the function for cheking upper characters
 *
 * @c: variable we want to check
 * Return: it returs 1 r 0 if the character is an upper or not respectively
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
