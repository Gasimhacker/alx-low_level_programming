#ifndef MAIN_H
#define MAIN_H

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

#endif
