#include "main.h"

/**
 * _strncat - appends at most n bytes from src to dest
 * @dest: destination string
 * @src: source string (need not be null-terminated if it has n or more bytes)
 * @n: maximum number of bytes to use from src
 *
 * Description: overwrites the terminating null byte of dest,
 * then adds a terminating null byte at the end of the result.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
