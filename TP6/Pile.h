#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NIL -1

#define T 10

typedef struct Pile Pile;
typedef struct Pile *pile;

typedef struct cellule cellule;
// typedef struct cellule *curseur;
typedef int curseur;

struct cellule{
    char value;
    curseur prec;
};

struct  Pile
{
    /* data */
    curseur last;
    int firstFree;
    cellule tab[T];
    int length;
};

/* liste des primitives */

char valeur(pile P);

int pileVide(pile P);

int pilePleine(pile P);
 
void creerPile(pile P);

void empile(pile P, char c);

void depile(pile P);

void destroyPile(pile P);

/* fin des primitives */
