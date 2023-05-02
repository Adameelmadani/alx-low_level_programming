#include <stdio.h>
/* include header */

/**
  * main - print numbers
  *
  * Return: Always 0
  */
int main(void)
{
	int i;
	char str[] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
