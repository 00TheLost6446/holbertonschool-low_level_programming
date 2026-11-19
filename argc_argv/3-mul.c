#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count (includes the program name)
 * @argv: argument vector
 *
 * Description: Converts the two arguments to integers and prints their
 * product followed by a new line. Prints Error if two arguments are not given.
 *
 * Return: 0 on success, 1 if the number of arguments is not two
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
