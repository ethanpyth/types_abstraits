#include "interfaceListeSC.c"
#include <string.h>

void showList(listSC *L){
    debutList(L);
    while(getCleListe(L) != NIL){
        printf("%c", valeur(L));
        suivant(L);
    }
    printf("\n");
}

listSC *transStrToLSC(char *s){
    listSC *list;
    int i;
    creerListe(list);

    for(i = strlen(s) - 1; i >= 0; i++){
        insereEnTete(list, s[i]);
    }
    return list;
}

listSC *suppOcc(char *s, char c){
    listSC *L = transStrToLSC(s);
    while(getCleListe(L) != NIL){
        curseur temp = getCleListe(L);
        suivant(L);
        if(valeur(L) == c){
            setCleListe(L, temp);
            supprimeApres(L);
        }
    }
    debutList(L);
    return L;
}
