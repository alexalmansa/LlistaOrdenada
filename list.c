
#include "list.h"

/****************************************************/
//Aqui tenim totes les operacions del mòdul LlistaBID.
/****************************************************/

//Funció per crear una nova llista.
Llista	LLISTABID_crea () {
    Llista l;
    int err = 1;
    l.elements = 0;
    l.pri = (Node*) malloc (sizeof(Node));
    if (l.pri != NULL) {
        l.ult = (Node*) malloc (sizeof(Node));
        if (l.ult != NULL) {
            l.pdi = l.pri;
            l.pri->seg = l.ult;
            l.pri->ant = NULL;
            l.ult->ant = l.pri;
            l.ult->seg = NULL;
            err = 0;
        } else {
            free(l.pri);
        }
    }

    if (err == 1) {
        l.pri = NULL;
        l.ult = NULL;
        l.pdi = NULL;
    }
	    return l;
}


//Funció per consultar el int situat sobre el PDI de la nostre llista.
int	LLISTABID_consulta (Llista l, int* e) {

    if (l.pdi == l.pri || l.pdi == l.ult) {
        e->rightNumber = -1;
        e->leftNumber = -1;
        return 0;
    } else {
        *e = l.pdi->e;
        return 1;
    }
}

//Funció per eliminar un node de la nostre llista.
int LLISTABID_elimina (Llista * l) {
    Node * aux;

    if (l->pdi == l->pri || l->pdi == l->ult) {
        return 0;
    }
    aux = l->pdi;

    l->pdi->ant->seg = l->pdi->seg;
    l->pdi->seg->ant = l->pdi->ant;
    l->pdi = l->pdi->seg;
    l->elements--;

    free(aux);

    return 1;
}

//Funcio per avancar el PDI en la nostre llista.
int LLISTABID_avanca (Llista * l) {

    if (l->pdi->seg == NULL) {
        return 0;
    }

    l->pdi = l->pdi->seg;
    return 1;
}

//Funcio per tirar enrere una posició el PDI en la nostre llista.
int LLISTABID_retrocedeix (Llista * l) {

    if (l->pdi->ant == NULL) {
        return 0;
    }

    l->pdi = l->pdi->ant;
    return 1;
}

//Funció per posar el nostre PDI en primera posicio.
int LLISTABID_vesInici (Llista * l) {

    l->pdi = l->pri->seg;
    return 1;
}

//Funcio per posar el nostre PDI en ultima posicio.
int LLISTABID_vesFinal (Llista * l) {

    l->pdi = l->ult->ant;
    return 1;
}

//Funcio per comprovar si la llista esta buida.
int LLISTABID_buida (Llista l) {

    return l.pri->seg == l.ult;
}

//Funcio per comprovar que el nostre PDI esta situat al principi.
int LLISTABID_inici (Llista l) {
    return l.pdi == l.pri;
}

//Funcio per comprovar que el nostre PDI esta situat al final.
int LLISTABID_final (Llista l) {
    return l.pdi == l.ult;
}

//Funcio per destruir la nostre llista.
void LLISTABID_destrueix (Llista * l) {
    Node * aux;

    while (l->pri != NULL) {
        aux = l->pri;
        l->pri = l->pri->seg;
        free(aux);
    }

    l->pri = NULL;
    l->ult = NULL;
    l->pdi = NULL;
}


