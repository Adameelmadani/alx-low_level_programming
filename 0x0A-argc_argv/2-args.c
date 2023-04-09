#include <stdio.h>

/**
  * main - print all arg
  * @argc: count arg
  * @argv: vector arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
