/**
 * _strlen_recursion - Return the length of a string
 * @s: The string to calculate its length
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
