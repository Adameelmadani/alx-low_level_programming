#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - print sum of numbers
  * @argc: count arg
  * @argv: vector arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int a = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) == 0) &&
					(strcmp(argv[i], "0") != 0))
			{
				a = 1;
				break;
			}
			sum += atoi(argv[i]);
		}
	}
	if (a == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
