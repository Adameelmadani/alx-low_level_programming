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
	int k;
	int m;
	int l;

	m = 1;
	l = 2;
	for (i = 0; i < 8; i++)
	{
		for (j = m; j < 9; j++)
		{
			for (k = l; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i == 7 && j == 8 && k == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			l++;
		}
		m++;
		l = m + 1;
	}

	putchar('\n');
	return (0);
}
