#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98.
 * @n: The number to start to count from it.
 *
 * Return: Always void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	printf("%d\n", n);
}
