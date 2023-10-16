/**
 * _strncat - Concatenate two strings
 * @src: The string to be appended
 * @dest: The string to append to it
 * @n: The number of the concatenated chracters
 *
 * Return: The pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while ((*dest != '\0'))
	{
		dest++;
	}

	while ((*src) != '\0' && n--)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (ptr);
}
