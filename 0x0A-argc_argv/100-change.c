#include <stdio.h>
#include <stdlib.h>


/**
 * main - Print the minimum number of
 *	  coins to make change for an amount of money
 * @argc: Holds the number of arguments passed to the main
 * @argv: An array of pointers to string arguments
 *
 * Return: If the number of arguments
 *	   passed is not exactly one - 1,
 *	   otherwise - 0
 */
int main(int argc, char *argv[])
{
	int num_cents = 0;
	int cents[] = {25, 10, 5, 2, 1, 0};
	int *p = cents;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0 && *p)
	{
		if (change >= *p)
		{
			num_cents += (change / *p);
			change %= *p;
		}

		p++;

	}

	printf("%d\n", num_cents);
	return (0);
}
