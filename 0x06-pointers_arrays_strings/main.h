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
 * _strcat - Concatenate two strings
 * @src: The string to be appended
 * @dest: The string to append to it
 *
 * Return: The pointer to the destination.
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - Concatenate two strings
 * @src: The string to be appended
 * @dest: The string to append to it
 * @n: The number of the concatenated chracters
 *
 * Return: The pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Copy a string in one variable into another variable
 * @src: The string to be copied
 * @dest: The destination of the copied string
 * @n: The number of the copied characters
 *
 * Return: The pointer to the destination.
 */
char *_strncpy(char *dest, const char *src, int n);

/**
 * _strcmp - Compare two strings
 * @s1: The first string
 * @s2: The string to compare with the first
 * Return: Zero if both strings are identical,
 *	   greater than zero when the matching
 *	   character of left string has greater
 *	   ASCII value than the character of
 *	   the right string, less than zero
 *	   when the left character has a smaller
 *	   value.
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - Reverse an array of integers
 * @a: The array to be reversed
 * @n: The number of elemnts of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - Change all lowercase letters of
 *		    a string to uppercase
 * @str: The string to change its characters
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str);

/**
 * cap_string - Capitalize all words of a string
 * @str: The string to capitalize its words
 *
 * Return: A pointer to the new string
 */
char *cap_string(char *str);

/**
 * leet - Encode a string
 * @str: The string to be encoded
 *
 * Return: A pointer to the modified string
 */
char *leet(char *str);

/**
 * rot13 - Encode a string using rot 13
 * @str: The string to be encoded
 *
 * Return: A pointer to the modified string
 */
char *rot13(char *str);

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n);

/**
 * infinite_add - Add two numbers
 * @n1: The string that contains the first number
 * @n2: The string that contains the second number
 * @r: The buffer that will store the result
 * @size_r: The buffer size
 *
 * Return: Apointer to the result if r can
 *	   store the result, 0 otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - Print a buffer
 * @b: A pointer to the buffer
 * @size: The number of bytes to be printed
 * Return: void
 */
void print_buffer(char *b, int size);

#endif
