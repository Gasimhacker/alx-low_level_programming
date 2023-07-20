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
 * _isupper - Check for uppercase character.
 * @c: The character to check
 * Return: 1 if c is uppercase 0 otherwise.
 */
int _isupper(int c);

/**
 * _isdigit - Check for a digit.
 * @c: The character to check
 * Return: 1 if c is digit 0 otherwise.
 */
int _isdigit(int c);

/**
 * mul - Multiply two integers
 * @a: The number to multiply another number with
 * @b: The number multiplied by the first number
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b);

/**
 * print_numbers - Print the numbers, from 0 to 9, followed by a new line
 * Return: Always void.
 */
void print_numbers(void);

/**
 * print_most_numbers - Print the numbers, from 0 to 9,
 *                      but not 2 or 4
 *                      followed by a new line
 * Return: Always void.
 */
void print_most_numbers(void);

#endif
