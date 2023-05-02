#include <stdio.h>
/* include studio */

/**
  * main - print alphabet letters
  *
  * Return: Always 0
  */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{ putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
