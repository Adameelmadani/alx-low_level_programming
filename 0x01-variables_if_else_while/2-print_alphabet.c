#include <stdio.h>
/* include studio */

/**
  * main - print alphabet letters
  *
  * Return: Always 0
  */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{ putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
