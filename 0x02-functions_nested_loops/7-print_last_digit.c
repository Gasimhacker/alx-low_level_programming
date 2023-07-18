/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to print its last digit.
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
