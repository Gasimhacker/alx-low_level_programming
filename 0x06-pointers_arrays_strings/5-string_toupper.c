/**
 * string_toupper - Change all lowercase letters of
 *		    a string to uppercase
 * @str: The string to change its characters
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);
}
