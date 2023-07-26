/**
 * rot13 - Encode a string using rot 13
 * @str: The string to be encoded
 *
 * Return: A pointer to the modified string
 */
char *rot13(char *str)
{
	int index = 0;

	while (str[index])
	{

		while ((str[index] >= 'A' && str[index] <= 'Z') ||
		       (str[index] >= 'a' && str[index] <= 'z'))
		{
			if (str[index] <=  'M' ||
			    (str[index] >= 'a' && str[index] <= 'm'))
			{
				str[index++] += 13;
				continue;
			}
			str[index++] -= 13;
		}

		index++;
	}
	return (str);
}
