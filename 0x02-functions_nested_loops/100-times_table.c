#include "main.h"
/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: The number used to print the times table.
 * If n is greater than 15 or less than 0:
 * the function should not print anything
 *
 * Return: Always void.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, result;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				result = i * j;

				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result <= 99)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result % 100) / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
