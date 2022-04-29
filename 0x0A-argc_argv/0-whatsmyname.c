#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * Return: 0 always
 */

int main(int argc, char* argv[])
{
	int i;

	printf("Prints Program Name\n");
	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
