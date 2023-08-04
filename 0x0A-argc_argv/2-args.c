#include <stdio.h>
/**
 * main - Print all of the arguments it receives
 * @argc: Holds the number of arguments passed to the main
 * @argv: An array of pointers to string arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
