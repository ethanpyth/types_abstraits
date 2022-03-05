#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define T 100

typedef struct objet {
    char v;
    int suivant;
} Objet;

typedef struct LSC {
    Objet tab[T];
    int premierLibre;
    int tete;
    int cle;
} LCS;
