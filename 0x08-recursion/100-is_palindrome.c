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


/**
 * check_palindrome - Check if the string is palindroem
 * @s: The string to be checked
 * @len: The length of the string
 *
 * Return: If the string is a palindrome - 1
 *	   If the string is not a palindrome  - 0
 */
int check_palindrome(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);

	if (*s != *(s + len - 1))
		return (0);

	return (check_palindrome(s + 1, len - 2));
}


/**
 * is_palindrome - Check if the string is a palindrome
 * @s: The string to be checked
 *
 * Return: If the string is a palindrome - 1
 *	   If the string is not a palindrome  - 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len));
}
