#include <stdlib.h>

/**
  * _realloc - reallocate a void pointer
  * @ptr: void *
  * @old_size: inter u
  * @new_size: inter u
  * Return: void *
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *lp, *sp;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	sp = (char *)ptr;
	if (new_size > old_size)
	{
		lp = malloc(new_size);
		if (lp == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			lp[i] = sp[i];
		free(ptr);
		return (lp);
	}
	lp = malloc(new_size);
	if (lp == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		lp[i] = sp[i];
	free(ptr);
	return (lp);
}
