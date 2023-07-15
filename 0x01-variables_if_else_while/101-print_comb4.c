#include <stdio.h>
/**
 * main - Print the all possible combinations of three-digit numbers.
 * Discreption: Print all possible different combinations of three digits:
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Print only the smallest combination of three digits
 * Return: Always 0 (succed).
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
