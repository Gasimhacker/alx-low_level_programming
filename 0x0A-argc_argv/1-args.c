#include <stdio.h>
/**
 * main - Print the number of of arguments passed into it
 * @argc: Holds the number of arguments passed to the main
 * @argv: An array of pointers to string arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
