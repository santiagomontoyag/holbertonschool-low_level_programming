#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	printf("Last digit of %i is %i ", n, ld);
	if (ld > 5)
		printf("and is greater than 5\n");
	if (ld == 0)
		printf("and is 0\n");
	if (ld < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
