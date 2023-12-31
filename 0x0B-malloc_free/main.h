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

/**
 * str_concat - Concatenate two strings given as a parameter into
 *		  a newly allocated memory space
 * @s1: The string to be put first in the new string
 * @s2: The string to be put second in the new string
 *
 * Return: A pointer to the concatenated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - Create a 2d array of zeros
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: A pointer to the 2d array, or NULL if it fails
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Free a 2d array of that was created by alloc_grid function
 * @grid: A pointer to the created 2d array
 * @height: The height of the array
 *
 * Return: Void
 */
void free_grid(int **grid, int height);

/**
 * argstostr - Concatenate all the arguments of the program into
 *		  a newly allocated memory space
 * @ac: The number of arguments passed
 * @av: An array of pointers
 *
 * Return: A pointer to the concatenated string, NULL otherwise
*/
char *argstostr(int ac, char **av);

/**
 * strtow - Split  a string into words
 * @str: The string to be splitted
 *
 * Return: A pointer to An array of strings, NULL if it fails
*/
char **strtow(char *str);

#endif
