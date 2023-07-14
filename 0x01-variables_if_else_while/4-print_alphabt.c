#include <stdio.h>
/**
 * main - Print the alphabet in lowercase except 'e' and 'q'.
 * Return: Always 0 (succed).
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
