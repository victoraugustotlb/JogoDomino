//Dom_JLRV_PROJETO - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include <stdio.h>

// Struct dos lados do domino
typedef struct {
    int lado1;
    int lado2;
} peca;

//Funcao responsavel por gerar as pecas do domino 
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

