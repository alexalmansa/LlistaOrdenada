#include <stdio.h>
#include "list.h"



int main (int argc, char** argv) {
    Llista list;
    int error;
    list = LLISTABID_crea();                                        //creació de la llista

    printf("Elements inicials a la llista %d\n", list.elements);    //printem quants elements hi ha inicialment

    error= LLISTABID_vesInici(&list);                               //anem a la primera casella de la llista i inserim elements desordenats
    error = LLISTABID_inserirOrd(&list, 5);
    error = LLISTABID_inserirOrd(&list, 4);
    error = LLISTABID_inserirOrd(&list, 6);
    error = LLISTABID_inserirOrd(&list, 10);
    error = LLISTABID_inserirOrd(&list, 20);
    error = LLISTABID_inserirOrd(&list, 1);

    error= LLISTABID_vesInici(&list);                               //tornem a l'inici i anem consultant elements fins que arribem al final

    while (error){
        error = LLISTABID_consulta(list);
        error = LLISTABID_avanca(&list);

    }


    printf("Elements Finals a la llista %d\n", list.elements);      //printem els elements que han quedat finalment a la llista



}
