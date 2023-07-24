#include "main.h"
/**
 * print_rev - Print a string, in reverse
 *	       followed by a new line, to stdout
 * @s: The string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i, count = 0;

	while (s[count])
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
