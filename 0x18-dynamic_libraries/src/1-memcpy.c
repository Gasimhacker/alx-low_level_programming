/**
 * _memcpy - Copy n bytes into the desired destination
 * @dest: A pointer to the memory area to be filled
 * @src: The memory area to take bytes from
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the destintaion
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
