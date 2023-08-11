#include <stdlib.h>

/**
 * count_word - count the number of words in a string
 * @s: string
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, words;

	flag = 0;
	words = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - Split  a string into words
 * @str: The string to be splitted
 *
 * Return: A pointer to An array of strings, NULL if it fails
*/
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, num_letters = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix =  malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (num_letters)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (num_letters + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - num_letters;
				k++;
				num_letters = 0;
			}
		}
		else if (num_letters++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
