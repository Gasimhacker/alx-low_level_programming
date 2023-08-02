/**
 * calc_sqrt - Calculate the square root based on
 *	       an initial guess
 * @square: The number to calculate the square root of
 * @guess: The initial guess
 *
 * Return: The square root of the number, otherwise -1
 */
int calc_sqrt(int square, int guess)
{
	int guess_squared = guess * guess;

	if (guess_squared == square)
		return (guess);

	else if ((guess_squared) < square && guess < square / 2)
		return (calc_sqrt(square, guess + 1));
	return (-1);
}
/**
 * _sqrt_recursion - Return the natural
 *		     square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int guess = 2;

	if (n == 1 || n == 0)
		return (n);

	return (calc_sqrt(n, guess));
}
