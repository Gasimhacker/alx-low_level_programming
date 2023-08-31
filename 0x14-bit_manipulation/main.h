#ifndef MAIN_H
#define MAIN_H


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars that should be converted
 *
 * Return: The converted number, or 0 if:
 *	   there is one or more chars in the string b that is not 0 or 1
 *	   b is NULL
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Print the binary representation of a number
 * @n: The number to print its binary representation
 *
 * Return: Void
 */
void print_binary(unsigned long int n);

#endif /* MAIN_H */
