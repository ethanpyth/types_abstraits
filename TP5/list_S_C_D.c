#include "list_S_C_D.h"

curseur creerCellule(char c){
    curseur cel = (curseur)malloc(sizeof(objet));

    if (cel != NULL){
        cel->suivant = NULL;
        cel->v = c;
    }

    return cel;
}

LSCD creerListe(){
    LSCD L = (LSCD)malloc(sizeof(list_SCD));

    L->idHeadCells = NULL;
    L->idKey = NULL;
    L->idQueueCells = NULL;
    L->length = 0;
    return L;
}

void insereEnTete(list_SCD *L, char c){
    curseur cel = creerCellule(c);
    cel->suivant = L->idHeadCells;
    cel->v = c;
    L->idHeadCells = cel;
    L->idKey = cel;
    L->length++;
    if(L->length == 1){
        L->idQueueCells = cel;
    }
}

void suivant(list_SCD *L){
    if(L->idKey != NIL){
        L->idKey = L->idKey->suivant;
    }
}

void debutListe(list_SCD *L){
    L->idKey = L->idHeadCells;
}

char valeur(list_SCD *L){
    if(L->idKey != NIL){
        return L->idKey->v;
    }else{
        return ' ';
    }
}

int listeVide(list_SCD *L){
    if(L->length == 0){
        return 1;
    }else
        return 0;
}

void insereApres(list_SCD *L, char c){
    curseur cel = (curseur)malloc(sizeof(objet));

    cel->v = c;
    cel->suivant = L->idKey->suivant;
    if(L->idKey == L->idQueueCells)
        L->idQueueCells = cel;
    L->idKey->suivant = cel;
    L->length++;
}

curseur getCleListe(list_SCD *L){
    return L->idKey;
}

void setCleListe(list_SCD *L, curseur p){
    L->idKey = p;
}

void supprimeApres(list_SCD *L){
    curseur idsup = L->idKey->suivant;

    L->idKey->suivant = idsup->suivant;
    L->length--;
    free(idsup);
}

void supprimeEnTete(list_SCD *L){
    curseur cel = L->idHeadCells;
    L->idHeadCells = L->idHeadCells->suivant;
    L->idKey = L->idHeadCells;
    L->length--;
    free(cel);
}
