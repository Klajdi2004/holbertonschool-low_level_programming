#include <stdio.h>

/**
 * main - main function
 * @argc: -
 * @argv: -
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv++)
		printf("%d\n", argc);
	return (0);
}
