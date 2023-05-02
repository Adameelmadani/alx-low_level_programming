#include <stdio.h>
#include <stdlib.h>

/**
  * main - change money
  * @argc: count arg
  * @argv: vector arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int s = 0;
	int a, e, s1, s2, s3;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a > 0)
		{
			s = a / 25;
			e = a % 25;
			s1 = e / 10;
			e = e % 10;
			s2 = e / 5;
			e = e % 5;
			s3 = e / 2;
			e = e % 2;
			s += s1 + s2 + s3 + e;
			printf("%d\n", s);
		} else
		{
			printf("%d\n", 0);
		}
		return (0);
	}
	printf("Error\n");
	return (1);
}
