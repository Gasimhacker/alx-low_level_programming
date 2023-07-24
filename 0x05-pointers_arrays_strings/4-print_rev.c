#include "main.h"
/**
 * print_rev - Print a string, in reverse
 *	       followed by a new line, to stdout
 * @s: The string to be printed
 * Return: void
 */
void print_rev(char *str)
{
	int i, count = 0;

	while (str[count])
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
