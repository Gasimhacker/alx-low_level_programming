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


#endif
