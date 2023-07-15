#include <stdio.h>
/**
 * main - Print the alphabet in lowercase but in reverse
 * Return: Always 0 (succed).
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch--);
	}
	putchar('\n');
	return (0);
}
