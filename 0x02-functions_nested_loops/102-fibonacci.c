#include <stdio.h>
/**
 * main - Print the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	long int fib1 = 0, fib2 = 1, sum = 0;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%d, ", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
