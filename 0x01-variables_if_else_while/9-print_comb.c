#include <stdio.h>
/**
 * main - Print the all possible combinations of single-digit numbers.
 * Return: Always 0 (succed).
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n++ != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
