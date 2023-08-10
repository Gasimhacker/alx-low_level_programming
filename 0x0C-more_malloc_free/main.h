#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory,
 *	   if malloc fails, the function should cause normal process
 *	   termination with a status value of 98
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - Concatenate two strings given as a parameter into
 *		    a newly allocated memory space taking n characters
 *		    from the second string
 * @s1: The string to be put first in the new string
 * @s2: The string to be put second in the new string
 * @n: The number of characters to be taken
 *     from the second string, if n is greater than
 *     or equal the length of s2 then use the entire string s2
 *
 * Return: A pointer to the concatenated string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);


#endif
