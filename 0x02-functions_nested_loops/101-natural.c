#include "main.h"

/**
  * natural - multiples of 5 and 3
  */

void natural(void)
{
	int i;
	int k;

	k = 0;
	for (i = 1024; i > 2; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			k = k + i;
		}
	}
}
