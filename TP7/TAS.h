#include <stdlib.h>
#include <stdio.h>

#define T_MAX 100
#define RACINE 1
typedef struct TasMin
{
    /* data */
    char arbre[T_MAX];
    int  s;
    int taille;
} TasMin;

/* listes des primitives */

void creerTas(TasMin *t, char x);

char valeur(TasMin *t);

void entasser(TasMin *t, char x);

void permuter(TasMin *t, int s1, int s2);

char pere(TasMin *t, int s);

void reorganiserAsc(TasMin *t, int s);
