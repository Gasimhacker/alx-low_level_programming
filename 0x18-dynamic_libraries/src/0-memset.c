/**
 * _memset - Fill memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The constant byte to fill with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index++] = b;
	}
	return (s);
}
