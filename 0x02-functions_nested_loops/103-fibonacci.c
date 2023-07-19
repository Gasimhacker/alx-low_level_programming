#include <stdio.h>
/**
 * main - Print the sum of the even valued
 * Fibonacci numbers whose values do not exceed 4,000,000.
 * Return: Always 0.
 */
int main(void)
{
	long int fib1 = 0, fib2 = 1, sum = 0, even_sum = 0;
	int count;

	while (sum <= 4000000)
	{
		sum = fib1 + fib2;
		if (sum % 2 == 0)
		{
			even_sum += sum;
		}

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%ld\n", even_sum);
	return (0);
}
