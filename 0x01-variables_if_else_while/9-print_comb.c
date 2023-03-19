#include <stdio.h>
/* include studio */

/**
  * main - print alphabet letters
  *
  * Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
		{ break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
