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
 * memset - Fill memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The constant byte to fill with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copy n bytes into the desired destination
 * @dest: A pointer to the memory area to be filled
 * @src: The memory area to take bytes from
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the destintaion
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Locate a character in a string
 * @s: The string to be searched
 * @c: The character to find
 *
 * Return: A pointer to the occurrence of the character c
 *	   in the string s, or NULL if the character is
 *	   not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Git the length of a prefix substring
 * @s: The string to be searched
 * @accept: The substring that should be in s
 *
 * Return: The number of bytes in the initial
 *	   segment of s which consist
 *	   only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Search for any of a set of bytes
 * @s: The string to be searched
 * @accept: The substring that should contain a byte in s
 *
 * Return: A pointer to the byte in s that matches
 *	   one of the bytes in accept,or NULL if
 *	   no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locate a substring
 * @haystack: The string to be searched
 * @needle: The substring that should be located
 *
 * Return: A pointer to the beginning of the located
 *	   substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - Print the chess board
 * @a: The board array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - Print the sum of the two
 *		    diagonals of a square matrix
 *		    of integers
 * @a: The square matrix
 * @size: The size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size);

/**
 * set_string - Set the value of a pointer to a char
 * @s: The address of the pointer
 * @to: A pointer to the value to be set in s
 *
 * Return: void
 */
void set_string(char **s, char *to);

#endif
