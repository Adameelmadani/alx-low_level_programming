#include <stdio.h>

/**
  * main - print numbers
  *
  * Return: 0
 */

int  main(void)
{
	int i;
	int l;
	int k;

	for (i = 1; i <= 100; i++)
	{
		l = i % 3;
		k = i % 5;
		if (l == 0 && k == 0)
		{
			printf("FizzBuzz");
		} else if (l == 0)
		{
			printf("Fizz");
		} else if (k == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
