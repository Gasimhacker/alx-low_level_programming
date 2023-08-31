#ifndef MAIN_H
#define MAIN_H


/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars that should be converted
 *
 * Return: The converted number, or 0 if:
 *	   there is one or more chars in the string b that is not 0 or 1
 *	   b is NULL
 */
unsigned int binary_to_uint(const char *b);

#endif /* MAIN_H */
