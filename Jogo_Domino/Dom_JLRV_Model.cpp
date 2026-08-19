//Dom_JLRV_Model - Projeto Domino
//12/08/2026
//Joao
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva

#include <stdio.h>
#include "Dom_JLRV_Model.h"

void geradorDomino(peca conjunto[]){
    int vetor = 0;
    for (int i = 0; i <= 6; i++){
        for (int j = i; j <= 6; j++){
            conjunto[vetor].lado1 = i;
            conjunto[vetor].lado2 = j;
            vetor++;
        }
    }
}

