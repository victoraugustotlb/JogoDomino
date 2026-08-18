//Dom_JLRV_PROJETO - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi
#include "Dom_JLVR_View.h"
#include <stdio.h>

void printMenu(){
    printf("Menu:\n");
	printf("1)Embaralhar peças\n");
	printf("2)Desembaralhar peças\n");
	printf("3)Mostrar peças\n");
	printf("4)Sair\n");
}

void ordenarPecas(){
    for (int gerar = 0; gerar < 28; gerar++){
        printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
    }
}
