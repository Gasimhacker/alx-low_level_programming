#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c);

/**
 * _puts_recursion - Print  a string, followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: The string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - Return the length of a string
 * @s: The string to calculate its length
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s);

/**
 * factorial - Return the factorial of a given number
 * @n: The number to calculate its factorial
 *
 * Return: The factorial of the number
 */
int factorial(int n);

/**
 * _pow_recursion - Return the value of x
 *		    raised to the power of y
 * @x: The number to be raised
 * @y: The power
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - Return the natural
 *		     square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, -1 otherwise
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - Check if the number is prime
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n);

/**
 * is_palindrome - Check if the string is a palindrome
 * @s: The string to be checked
 *
 * Return: If the string is a palindrome - 1
 *	   If the string is not a palindrome  - 0
 */
int is_palindrome(char *s);


#endif
