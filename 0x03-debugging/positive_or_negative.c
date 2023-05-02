#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * posititive_or_negative - Determine sign number
  * @n: son
  */
void  posititive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
}
