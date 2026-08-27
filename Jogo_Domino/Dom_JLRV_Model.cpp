//Dom_JLRV_Model - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

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
//Funcao que encontra a maior carroca entre as maos dos jogadores
peca encontrarMaiorCarroca(peca mao1[], peca mao2[]){
    peca carroca;
    carroca.lado1 = -1;
    carroca.lado2 = -1;

    for(int valor = 6; valor >= 0; valor--){
        for(int i = 0; i < 7; i++){
            if(mao1[i].lado1 == valor && mao1[i].lado2 == valor){
                carroca = mao1[i];
                return carroca;
            }
        }
        for(int i = 0; i < 7; i++){
            if(mao2[i].lado1 == valor && mao2[i].lado2 == valor){
                carroca = mao2[i];
                return carroca;
            }
        }
    }

    return carroca; 
}

