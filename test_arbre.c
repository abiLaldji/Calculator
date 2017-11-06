

#include <stdio.h
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include "struct.h"
#include "fonctions.h"

typedef char * string;

typedef struct node
{
    char key;
    struct node *left;
    struct node *right;
} node ;

typedef struct arbre
{
  struct node *tete;
  struct node *actual;
} arbre;


static string chaine = "EISHVUF ARL WPJTNDBXKCYMGZQO";
int count = -1;
static node nodes[26];
static arbre arb;
static int ci = 0;



  node* creerNoeud(int niv)
  {
    int a;
    node n;

    if(niv < 5)
    {

      ci = ci + 1;

      a = ci;
      printf("n.left->key : %c, niv %i \n", chaine[a - 1], niv + 1 );
      n.left = creerNoeud(niv + 1);
      n.left->key = chaine[a - 1];



      ci = ci + 1;
      a = ci;
      printf("n.right->key : %c, niv %i\n",chaine[a - 1], niv + 1);
      n.right = creerNoeud(niv + 1);
      n.right->key = chaine[a- 1];

  }
    count = count + 1;
    nodes[count] = n;
    return &nodes[count];
}

void createArbre()
{
  arb.tete = creerNoeud(1);
}

int main() {
    createArbre();
    printf("parent char key L : %c, R : %c", arb.tete->left->key, arb.tete->right->right->key);
    return 0;
}

//connard






