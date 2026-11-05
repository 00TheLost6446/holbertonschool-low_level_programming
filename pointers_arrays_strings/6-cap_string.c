#include "main.h"

/**
 * is_separator - checks if a character separates words
 * @c: character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
static int is_separator(char c)
{
	char seps[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; seps[i] != '\0'; i++)
	{
		if (c == seps[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || is_separator(str[i - 1]))
		    && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
	}
	return (str);
}
