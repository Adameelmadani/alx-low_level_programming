#include "main.h"

void _puts(char *s)
{
	int i = 0;
	
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
