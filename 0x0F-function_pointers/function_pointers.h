#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H


/**
 * print_name - Print the given name as specified
 *		by the function "f"
 * @name: The name to print
 * @f: A pointer to the function that specifies how to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Execute a function given as a parameter
 *		    on each element of an array
 * @array: The array to iterate the execution
 *	   on each of its elements
 * @size: The size of the array
 * @action: The function that should be executed on the array's elements
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
