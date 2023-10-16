/**
 * _strcat - Concatenate two strings
 * @src: The string to be appended
 * @dest: The string to append to it
 *
 * Return: The pointer to the destination.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while ((*dest != '\0'))
	{
		dest++;
	}
	while ((*src) != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (ptr);
}
