#include <stdio.h>

/**
 * main - prints all arguments it receives, one per line
 * @argc: argument count (includes the program name)
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
