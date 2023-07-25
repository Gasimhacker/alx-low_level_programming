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
 * reset_to_98 - Update the value to 98.
 * @n: a pointer to an int
 *
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - Swap the values of two integers
 * @a: The fisrt element to be swapped
 * @b: The second element to be swapped
 *
 * Return: void.
 */
void swap_int(int *a, int *b);

/**
 * _strlen - Returns the length of the string
 * @s: The string to calculate its length
 *
 * Return: The length of the string
 */
int _strlen(char *s);

/**
 * _puts - Print a string, followed by a new line, to stdout
 * @str: The string to be printed
 * Return: void
 */
void _puts(char *str);

/**
 * print_rev - Print a string, in reverse
 *	       followed by a new line, to stdout
 * @s: The string to be printed
 * Return: void
 */
void print_rev(char *s);

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 * Return: void
 */
void rev_string(char *s);

/**
 * puts2 - Print every other character of a string
 * @str: The string to print from it
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - Print half of the string
 * @str: The string to print half of it
 *
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - Print n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - Copy a string in one variable into another variable
 * @src: The string to be copied
 * @dest: The destination of the copied string
 *
 * Return: The pointer to the destination.
 */
char *_strcpy(char *dest, char *src);


#endif
