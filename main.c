#include <stdio.h>
#include "list.h"



int main (int argc, char** argv) {
    Llista list;
    int error;
    int i = 0;
    list = LLISTABID_crea();
    printf("Elements inicials a la llista %d\n", list.elements);

    error= LLISTABID_vesInici(&list);
    error = LLISTABID_inserirOrd(&list, 5);
    error = LLISTABID_inserirOrd(&list, 4);
    error = LLISTABID_inserirOrd(&list, 6);
    error = LLISTABID_inserirOrd(&list, 10);
    error = LLISTABID_inserirOrd(&list, 20);
    error = LLISTABID_inserirOrd(&list, 1);

    error= LLISTABID_vesInici(&list);

    while (error){
        error = LLISTABID_consulta(list);
        error = LLISTABID_avanca(&list);

    }


    printf("Elements Finals a la llista %d\n", list.elements);

    

}
