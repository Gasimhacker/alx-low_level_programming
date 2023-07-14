#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This function will print the value of the number followed by:
 * is positive if the number is positive.
 * is negative if the number is negative.
 * is zero,otherwise.
 * Return: Always 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
