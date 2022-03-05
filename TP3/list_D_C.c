#include "list_D_C.h"

LDC createList(){
    LDC list = (LDC)malloc(sizeof(ListDC));
    if (list != NULL){
        list->length = 0;
        list->idHeadCells = NULL;
        list->idQueueCells = NULL;
        list->idKey = NULL;
    }
    return list;
}

curseur createCells(char c){
    curseur cel = (curseur)malloc(sizeof(cells));
    if(cel != NULL){
        cel->val = c;
        cel->idNextCells = NULL;
        cel->idPrevCells = NULL;
    }
    return cel;
}

void insertInHead(LDC L, char c){
    curseur cel = createCells(c);
    cel->idNextCells = L->idHeadCells;
    L->idHeadCells = cel;
    L->idKey = cel;
    L->length++;
    if(L->length ==  1){
        L->idQueueCells = cel;
    }
}

void insertAfter(LDC L, char c){
    curseur cel = createCells(c);
    
    cel->idNextCells = L->idKey->idNextCells;
    cel->idPrevCells = L->idKey;
    L->idKey->idNextCells = cel;

    cel->idNextCells->idPrevCells = cel;
    if(cel->idNextCells != NULL){
        cel->idNextCells->idPrevCells = cel;
    }else{
        L->idQueueCells = cel;
    }
}

/*implémenter les autres primitives*/

void insertInQueue(LDC L, char c){
    curseur cel = createCells(c);
    cel->idNextCells = NULL;
    cel->idPrevCells = L->idKey;
    L->idKey->idNextCells = cel;
    L->idQueueCells->idNextCells = cel;
    L->idQueueCells = cel;
    L->length++;
}


void suivant(LDC L){
    if (L->idKey != NULL){
        L->idKey = L->idKey->idNextCells;
    }
}

void startList(LDC L){
    L->idKey = L->idHeadCells;
}

void setQueue(LDC L){
    if(L->length == 1){
        L->idQueueCells = L->idKey;
    }else{
        
    }
}
