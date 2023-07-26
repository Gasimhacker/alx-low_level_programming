/**
 * cap_string - Capitalize all words of a string
 * @str: The string to capitalize its words
 *
 * Return: A pointer to the new string
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*(str - 1) == ' ' ||
		    *(str - 1) == '\t' ||
		    *(str - 1) == '\n' ||
		    *(str - 1) == ',' ||
		    *(str - 1) == ';' ||
		    *(str - 1) == '.' ||
		    *(str - 1) == '!' ||
		    *(str - 1) == '?' ||
		    *(str - 1) == '"' ||
		    *(str - 1) == '(' ||
		    *(str - 1) == ')' ||
		    *(str - 1) == '{' ||
		    *(str - 1) == '}' ||
		    str == ptr)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
		}
			str++;
	}
	return (ptr);
}
