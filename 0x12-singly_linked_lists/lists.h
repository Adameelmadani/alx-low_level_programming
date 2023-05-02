#ifndef LISTS_H_
#define LISTS_H_
#include <stddef.h>

typedef struct list_t *listPtr;
/**
  * struct list_t - list structer
  * @str: string
  * @len: length of string
  * @next: listPtr
  */
typedef struct list_t
{
	char *str;
	int len;
	listPtr next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif
