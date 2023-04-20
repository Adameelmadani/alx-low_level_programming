#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - main function
  * @argc: arg counter
  * @argv: arg vector
  * Return: 0 if it doesn't fail
  */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);
	if (strcmp(s, "/") != 0 && strcmp(s, "%") != 0 && strcmp(s, "+") != 0
			&& strcmp(s, "-") != 0 && strcmp(s, "*") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(s, "/") == 0 || strcmp(s, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(s)(a, b);
	printf("%d\n", result);
	return (0);
}
