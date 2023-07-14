#include <stdio.h>
/**
 * main - Print the digit numbers of base 10.
 * Return: Always 0 (succed).
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n++);
	}
	putchar('\n');
	return (0);
}
