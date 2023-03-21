#include "main.h"

/**
  * main - print lower case
  *
  * Return: always 0
  */

int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
