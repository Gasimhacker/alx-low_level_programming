/**
 * _strspn - Git the length of a prefix substring
 * @s: The string to be searched
 * @accept: The substring that should be in s
 *
 * Return: The number of bytes in the initial
 *	   segment of s which consist
 *	   only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num_bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				num_bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (num_bytes);
			}
		}
		s++;

	}
	return (num_bytes);
}
