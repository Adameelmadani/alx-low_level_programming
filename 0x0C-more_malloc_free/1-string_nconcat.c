#include <stdlib.h>

/**
  * string_nconcat - concat two strings
  * @s1: char pointer
  * @s2: char pointer
  * @n: u int
  * Return: char pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *p;

	for (len1 = 0; s1[len1] != '\0' && s1 != NULL; len1++)
		;
	for (len2 = 0; s2[len2] != '\0' && s2 != NULL; len2++)
		;
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1 && s1 != NULL; i++)
		p[i] = s1[i];
	for (i = 0; i < n && s2 != NULL; i++)
		p[i + len1] = s2[i];
	return (p);
}
