/**
 * _strncpy - copies a string, using at most n bytes from src
 * @dest: buffer where the string is copied
 * @src: string to copy
 * @n: maximum number of bytes to copy from src
 *
 * Description: If src is shorter than n, the rest of dest is
 * filled with null bytes. If src is n bytes or longer, dest is
 * not null-terminated.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
