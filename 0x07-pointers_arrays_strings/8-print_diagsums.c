#include <stdio.h>
/**
 * print_diagsums - Print the sum of the two
 *		    diagonals of a square matrix
 *		    of integers
 * @a: The square matrix
 * @size: The size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		sum1 += a[i];
		sum2 += a[((i % size) + 1) * (size - 1)];

	}
	printf("%d, %d\n", sum1, sum2);
}
