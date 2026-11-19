#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count (includes the program name)
 * @argv: argument vector
 *
 * Description: Prints the sum of all arguments followed by a new line.
 * Prints 0 if no number is given. Prints Error and returns 1 if any
 * argument contains a character that is not a digit.
 *
 * Return: 0 on success, 1 if an argument is not a positive number
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
