#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply two arguments and print the result
 * @argc: Holds the number of arguments passed to the main
 * @argv: An array of pointers to string arguments
 *
 * Return: If two arguments are passed - 0
 *	   Otherwise - 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);

		printf("%d\n", arg1 * arg2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
