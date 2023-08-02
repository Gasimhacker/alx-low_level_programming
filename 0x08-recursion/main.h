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


#endif
