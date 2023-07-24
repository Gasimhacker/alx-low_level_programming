#include "main.h"
/**
 * puts2 - Print every other character of a string
 * @str: The string to print from it
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
		if (str[index] != '\0')
		{
			index++;
		}
	}
	_putchar('\n');
}
