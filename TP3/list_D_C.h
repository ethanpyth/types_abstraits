#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NIL 0

typedef struct cells cells;
typedef struct cells *curseur;

typedef struct ListDC ListDC;
typedef struct ListDC *LDC;

struct cells {
    char val;
    curseur idNextCells;
    curseur idPrevCells;
};

struct ListDC
{
    curseur idHeadCells;
    curseur idQueueCells;
    int length;
    curseur idKey;
};

/*liste des primitives*/

LDC createList();
curseur createCells(char c);
void insertInHead(LDC L, char c);
void insertAfter(LDC L, char c);
void insertInQueue(LDC L, char c);
