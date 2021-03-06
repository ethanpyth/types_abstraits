#include "TAS.h"

void creerTas(TasMin *t, char x){
    t->taille = 1;
    t->s = RACINE;
    t->arbre[1] = x;
}

char valeur(TasMin *t){
    return t->arbre[1];
}

void entasser(TasMin *t, char x){
    t->taille++;
    t->s++;
    t->arbre;
    reorganiserAsc(t, x);
}

void reorganiserAsc(TasMin *t, int s){
    if(s != RACINE){
        if (t->arbre[s] < pere(t, s)){
            permuter(t, s, s/2);
            reorganiserAsc(t, s/2);
        }
    }
}

char pere(TasMin *t, int s){
    return t->arbre[s/2];
}

void permuter(TasMin *t, int s1, int s2){
    char a = t->arbre[s1];
    t->arbre[s1] = t->arbre[s2];
    t->arbre[s2] = a;
}

void detruireTas(TasMin *t){
    t->taille = 0;
    t->arbre[RACINE];
}

void supprimer(TasMin *t){
    t->taille--;
    t->arbre[RACINE] = t->arbre[t->s];
    t->s--;
    reorganiserDesc(t, RACINE);
}

void reorganiserDesc(TasMin *t, int s){
    char fg = filsG(t, s);
    char fd = filsD(t, s);
    char v = getValeur(t, s);
    if(fg != VIDE && fd != VIDE && fg < fd && fg < v){
        permuter(t, s, s * 2);
        reorganiserDesc(t, s * 2);
    }else if(fd < v){
        permuter(t, s, s * 2 + 1);
        reorganiserDesc(t, s * 2 + 1);
    }
    // if(t->arbre[s] > filsG(t, s)){
    //     permuter(t, s, s * 2);
    //     reorganiserDesc(t, s * 2);
    // }else if(t->arbre[s] > filsD(t, s)){
    //     permuter(t, s, s * 2 + 1);
    //     reorganiserDesc(t, s);
    // }
}

char getValeur(TasMin *t, int s){
    return t->arbre[s];
}

char filsD(TasMin *t, int s){
    if(s * 2 + 1 != t->taille)
        return t->arbre[s * 2 + 1];
    else
        return '-';
}

char filsG(TasMin *t, int s){
    if(s * 2 != t->taille)
        return t->arbre[RACINE * 2 + 1];
    else
        return t->arbre[RACINE * 2];
}
