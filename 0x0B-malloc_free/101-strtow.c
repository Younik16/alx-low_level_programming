#include "main.h"
#include <stdlib.h>

/* function parameter */
int count_words(char *str)
char **strtow(char *str)

/**
 * is_space - checks code 
 * c: function parameter
 * Return: int
 */

int is_space(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n'));
}

/**
 * count_words - checks code
 * @str: function parameter
 * Return: checked code
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - function to split a string into words
 * @str: function parameter
 * Return: words
 */

char **strtow(char *str)
{
	int word_count = count_words(str);
	int word = 0, word_length = 0;
	int i, j, in_word = 0;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (word_count == 0)
		return (NULL);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (is_space(str[i]))
		{
			if (in_word)
			{
				result[word] = (char *)malloc((word_length + 1) * sizeof(char));
				if (result[word] == NULL)
				{
					for (j = 0; j < word; j++)
						free(result[j]);
					free(result);
					return (NULL);
				}
				for (j = 0; j < word_length; j++)
				{
					result[word][j] = str[i - word_length + j];
				}
				result[word][word_length] = '\0';
				word++;
				word_length = 0;
				in_word = 0;
			}
		}
		else
		{
			word_length++;
			in_word = 1;
		}
	}
	if (in_word)
	{
	result[word] = (char *)malloc((word_length + 1) * sizeof(char));
	if (result[word] == NULL)
		{
			for (j = 0; j < word; j++)
				free(result[j]);
			free(result);
			return (NULL);
		}
		for (j = 0; j < word_length; j++)
		{
		result[word][j] = str[strlen(str) - word_length + j];
		}
		result[word][word_length] = '\0';
		word++;
	}
	result[word] = NULL;
	return (result);
}
