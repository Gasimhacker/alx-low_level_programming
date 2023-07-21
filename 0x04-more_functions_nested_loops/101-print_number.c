#include <stdio.h>
/**
 * main - Print the largest prime factor
 * Return: Always 0 .
 */
int main(void)
{
	long prime = 612852475143, div = 2;
	while (div < (prime / 2))
	{
		if (prime % div == 0)
		{
			prime /= div;
			continue;
		}
		div++;

	}
	printf("%ld\n", prime);
	return (0);
}
