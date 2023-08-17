#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Perform simple operations on 2 passed integers
 * @argc: The number of passed arguments
 * @argv: An array of pointers to the arguments passed
 *
 * Return: The result of the operation
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[3] == '0') && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);
	result = func_ptr(num1, num2);

	printf("%d\n", result);

	return (0);

}
