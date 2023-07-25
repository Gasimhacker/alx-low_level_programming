#include "main.h"
/**
 * puts_half - Print half of the string
 * @str: The string to print half of it
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
