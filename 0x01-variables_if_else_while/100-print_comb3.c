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
	int j;
	int m;

	m = 1;
	for (i = 0; i < 9; i++)
	{
		for (j = m; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		m++;
	}

	putchar('\n');
	return (0);
}
