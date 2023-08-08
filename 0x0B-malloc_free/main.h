#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - Create an array of chars, and initializes
 *		  it with a specific char
 * @size: The size of the array
 * @c: The character to be initialized in the array
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - Copy a string given as a parameter into
 *		  a newly allocated memory space
 * @str: The string to be copied
 *
 * Return: A pointer to the duplicated string, NULL otherwise
 */
char *_strdup(char *str);


#endif
