/**
 * factorial - Return the factorial of a given number
 * @n: The number to calculate its factorial
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
