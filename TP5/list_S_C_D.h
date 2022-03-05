#include <stdio.h>
#include <stdlib.h>

#define NIL 0

typedef struct objet objet;
typedef struct objet *curseur;

typedef struct list_SCD list_SCD;
typedef struct list_SCD *LSCD;

struct objet
{
    char v;
    curseur suivant;
};


struct list_SCD{
    int length;
    curseur idHeadCells;
    curseur idQueueCells;
    curseur idKey;
};

/* liste des primitives */

void debutListe(list_SCD *L);

void suivant(list_SCD *L);

int listeVide(list_SCD *L);

char valeur(list_SCD *L);

curseur getCleListe(list_SCD *L);

void setCleListe(list_SCD *L, curseur p);

curseur creerCellule(char c);

void insereEnTete(list_SCD *L, char  c);

void insereApres(list_SCD *L, char  c);

void supprimeEnTete(list_SCD *L);

void supprimeApres(list_SCD *L);

LSCD creerListe();

/* fin des primitives */
