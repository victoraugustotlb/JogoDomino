//Dom_JLRV_PROJETO - Projeto Domino
//12/08/2026
//Joao
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva

#include <stdio.h>

// Struct dos lados do domino
typedef struct {
    int lado1;
    int lado2;
} peca;

// Array das pecas
peca conjunto[28];

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

