/**
 * _strcmp - Compare two strings
 * @s1: The first string
 * @s2: The string to compare with the first
 * Return: Zero if both strings are identical,
 *	   greater than zero when the matching
 *	   character of left string has greater
 *	   ASCII value than the character of
 *	   the right string, less than zero
 *	   when the left character has a smaller
 *	   value.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1) == (*s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
