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
 * print_alphabet - Print the alphabet, in lowercase, followed by a new line
 * Return: Always void.
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Print 10 times the alphabet,
 * in lowercase, followed by a new line
 * Return: Always void.
 */
void print_alphabet_x10(void);

/**
 * _islower - Check for lowercase character.
 * @c: The character to check
 * Return: 1 if c is lowercase 0 otherwise.
 */
int _islower(int c);

/**
 * _isalpha - Check for alphabetic character.
 * @c: The character to check
 * Return: 1 if c is a letter 0 otherwise.
 */
int _isalpha(int c);

/**
 * print_sign - Print the sign of a number.
 * @n: The number to check
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n);

/**
 * _abs - Compute the absolute value of an integer.
 * @n: The number to compute its absolute value
 *
 * Return: The absolute value.
 */
int _abs(int n);

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to print its last digit.
 *
 * Return: The last digit.
 */
int print_last_digit(int n);

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Return: Always void.
 */
void jack_bauer(void);

/**
 * times_table - Print the 9 times table, starting with 0.
 * Return: Always void.
 */
void times_table(void);

/**
 * add - Add two integers
 * @n1: The number to add another number to it
 * @n2: The number added to the first number
 *
 * Return: The result of the addition.
 */
int add(int n1, int n2);

/**
 * print_to_98 - Print all natural numbers from n to 98.
 * @n: The number to start to count from it.
 *
 * Return: Always void.
 */
void print_to_98(int n);

/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: The number used to print the times table.
 * If n is greater than 15 or less than 0:
 * the function should not print anything
 *
 * Return: Always void.
 */
void print_times_table(int n);
#endif
