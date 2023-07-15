#include <stdio.h>
/**
 * main - Print the numbers of base 16 in lowercase.
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
