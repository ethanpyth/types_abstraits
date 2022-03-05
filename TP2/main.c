#include "utilitaire.c"

int main()
{
    listSC list;
    creerListe(&list);
    insereEnTete(&list, 'A');
    insereEnTete(&list, 'T');
    printf("taille : %d\n", list.taille);
    printf("premier : %d\n", list.premier);
    printf("prLibre : %d\n", list.prLibre);
    printf("cle : %d\n", list.cle);

    suivant(&list);
    suivant(&list);
    /*printf(showList(&list));*/
    
    listSC *s = suppOcc("Bonjour", *"o");
    showList(s);
    return 0;
}
