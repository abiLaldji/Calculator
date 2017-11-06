#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct node
{
    char key;
    struct node *left;
    struct node *right;
} node;

typedef char * string;

typedef struct arbre
{
  struct node *tete;
  struct node *actual;
} arbre;
