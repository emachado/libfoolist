#include <stdio.h>

#include <foolist.h>

int main()
{
  struct node *list = NULL;

  /* Linked-list example */

  if (foolist_insert_end(&list, 0) < 0)
    {
      perror("Cannot insert '0' at the end of the list");
      return -1;
    }

  if (foolist_insert_begin(&list, 1) < 0)
    {
      perror("Cannot insert '1' at the beginning of the list");
      return -1;
    }

  if (foolist_insert_begin(&list, 10) < 0)
    {
      perror("Cannot insert '10' at the beginning of the list");
      return -1;
    }

  if (foolist_insert_begin(&list, 2) < 0)
    {
      perror("Cannot insert '2' at the beginning of the list");
      return -1;
    }

  if (foolist_insert_begin(&list, 4) < 0)
    {
      perror("Cannot insert '4' at the beginning of the list");
      return -1;
    }

  if (foolist_insert_end(&list, 5) < 0)
    {
      perror("Cannot insert '5' at the end of the list");
      return -1;
    }

  foolist_print(list);

  if (foolist_remove_by_value(&list, 10) < 0)
    {
      perror("Cannot remove '10' of the list");
      return -1;
    }

  foolist_print(list);

  /* remove first */
  if (foolist_remove_by_value(&list, 4) < 0)
    {
      perror("Cannot remove '4' of the list");
      return -1;
    }

  foolist_print(list);

  /* remove last */
  if (foolist_remove_by_value(&list, 5) < 0)
    {
      perror("Cannot remove '5' of the list");
      return -1;
    }

  foolist_print(list);

  return 0;
}
