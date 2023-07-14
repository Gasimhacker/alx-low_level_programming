#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 * Return: Always 0 (succed).
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
