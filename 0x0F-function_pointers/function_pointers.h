#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H


/**
 * print_name - Print the given name as specified
 *		by the function "f"
 * @name: The name to print
 * @f: The function that specifies how to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *));

#endif
