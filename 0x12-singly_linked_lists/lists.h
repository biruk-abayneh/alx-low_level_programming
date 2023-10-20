#ifndef LISTS_H
#define LISTS_H

size_t list_len(const list_t *h);
int _strlen(const char *s);
list_t *add_node(list_t **head, const char *str);
unsigned int _strlen(char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);

#endif
