#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_digits - Check if the string contains only digits
 * @str: Apointer to the start of the string
 *
 * Return: If the string contains only digits - 1
 *	   Otherwise - 0
 */
int check_digits(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Add arguments and print the result
 * @argc: Holds the number of arguments passed to the main
 * @argv: An array of pointers to string arguments
 *
 * Return: If numbers are added - 0
 *	   If one of the number contains
 *	   symbols that are not digits - 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		int isdigit = check_digits(argv[i]);

		if (isdigit)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
