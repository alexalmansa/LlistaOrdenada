//
// Created by Alex Almansa on 05/10/2018.
//

#ifndef LLISTABIDIRECCIONAL_LIST_H
#define LLISTABIDIRECCIONAL_LIST_H

#include <stdlib.h>

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

#endif //LLISTABIDIRECCIONAL_LIST_H
