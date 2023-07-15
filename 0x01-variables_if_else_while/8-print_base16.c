#include <stdio.h>
/**
 * main - Print the alphabet in lowercase and upper case.
 * Return: Always 0 (succed).
 */
int main(void)
{
	char ch = 48;

	while (ch <= 57)
	{
		putchar(ch++);
	}
	ch = 97;

	while (ch <= 102)
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
