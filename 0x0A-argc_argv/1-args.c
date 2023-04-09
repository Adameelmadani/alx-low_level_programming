#include <stdio.h>

/**
  * main - print number of arguments
  * @argc: count arg
  * @argv: vector arg
  * Return: 0
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
