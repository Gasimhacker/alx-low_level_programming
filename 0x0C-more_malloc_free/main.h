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


#endif
