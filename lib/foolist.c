#include <stdio.h>
#include <stdlib.h>

#include "foolist.h"

/* Insert value at the beginning of the list */
int foolist_insert_begin(struct node **list, int i)
{
  struct node *new;

  debug("'%d'\n", i);

  if (!(new = malloc(sizeof(struct node))))
    {
      fprintf(stderr, "malloc error!\n");
      return -1;
    }
  new->value = i;
  new->next = *list;
  *list = new;
  return 0;
}

int foolist_insert_end(struct node **list, int i)
{
  struct node *new, *l;

  debug("'%d'\n", i);

  if (!(new = malloc(sizeof(struct node))))
    {
      fprintf(stderr, "malloc error!\n");
      return -1;
    }

  new->value = i;
  new->next = NULL;

  if (*list == NULL)
      *list = new;
  else
    {
      l = *list;
      while(l->next != NULL)
	l = l->next;
      l->next = new;
    }
  return 0;
}

int foolist_remove_by_value(struct node **list, int value)
{
  struct node *prev, *current = *list;

  debug("'%d'\n", value);

  /* if empty list */
  if (*list == NULL)
    {
      printf("cannot remove by value. list is empty.\n");
      return -1;
    }

  /* if first */
  if (current->value == value)
    {
      *list = (*list)->next;
      free(current);
      return 0;
    }

  prev = current;
  current = current->next;

  while(current != NULL)
    {
      if (current->value == value)
	{
	  prev->next = current->next;
	  free(current);
	  return 0;
	}
      prev = current;
      current = current->next;
    }

  debug("value '%d' not found.\n", value);
  return 0;
}

/* Print value of the list nodes */
void foolist_print(struct node *list)
{
  while(list != NULL)
    {
      printf("%d->", list->value);
      list = list->next;
    }
  printf("NULL\n");
  return;
}
