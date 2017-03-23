#include <stdio.h>
#include <stdlib.h>

#include "config.h" /* #define ENABLE_DEBUG */

#ifdef ENABLE_DEBUG
#define debug(fmt, ...)	do { fprintf(stderr, "%s: " fmt, __FUNCTION__, __VA_ARGS__); } while (0)
#else
#define debug(fmt, ...) do { } while (0)
#endif

struct node {
    int value;
    struct node *next;
};

int foolist_insert_begin(struct node **list, int i);
int foolist_insert_end(struct node **list, int i);
int foolist_remove_by_value(struct node **list, int value);
void foolist_print(struct node *list);
