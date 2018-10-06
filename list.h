//
// Created by Alex Almansa on 05/10/2018.
//

#ifndef LLISTABIDIRECCIONAL_LIST_H
#define LLISTABIDIRECCIONAL_LIST_H

#include <stdlib.h>
#include <stdio.h>


typedef struct _node {
    int num;
    struct _node * seg;
    struct _node * ant;
}Node;

typedef struct {
    Node * pri;
    Node * pdi;
    Node * ult;
    int elements;
}Llista;



Llista		LLISTABID_crea ();
int         LLISTABID_inserirOrd (Llista * l, int i);

int			LLISTABID_consulta (Llista l);
int 		LLISTABID_elimina (Llista * l);
int 		LLISTABID_avanca (Llista * l);
int 		LLISTABID_retrocedeix (Llista * l);
int 		LLISTABID_vesInici (Llista * l);
int 		LLISTABID_vesFinal (Llista * l);
int 		LLISTABID_buida (Llista l);
int 		LLISTABID_inici (Llista l);
int 		LLISTABID_final (Llista l);
void 		LLISTABID_destrueix (Llista * l);

#endif //LLISTABIDIRECCIONAL_LIST_H
