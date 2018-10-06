#include <stdio.h>
#include "list.h"



int main (int argc, char** argv) {
    Llista list;
    int error;
    int i = 0;
    list = LLISTABID_crea();

    error= LLISTABID_vesInici(&list);
    error = LLISTABID_inserirOrd(&list, 5);
    error = LLISTABID_inserirOrd(&list, 4);
    error = LLISTABID_inserirOrd(&list, 6);


    error= LLISTABID_vesInici(&list);

    error = LLISTABID_consulta(list);
    error = LLISTABID_avanca(&list);
    error = LLISTABID_consulta(list);
    error = LLISTABID_avanca(&list);
    error = LLISTABID_consulta(list);
    error = LLISTABID_avanca(&list);

    printf("ELEMENTS %d\n", list.elements);

    printf("%d\n", error);

}
