#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of parameters
 * @argv: names of parameters
 * Return: 0 always
 */

int main(int argc, char* argv[])
{
	int i;

	printf("Prints Program Name\n");
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
