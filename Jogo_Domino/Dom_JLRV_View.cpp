//Dom_JLRV_View - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include "Dom_JLRV_View.h"
#include <stdio.h>

//Menu principal do jogo
void printMenu(){
    printf("======Menu=====\n\n");
	printf("1)Embaralhar pecas\n");
	printf("2)Desembaralhar pecas\n");
	printf("3)Mostrar pecas\n");	
	printf("4)Sair\n");
	printf("\n===============\n");
	printf("Escolha uma opcao: ");
}

//Funcao responsavel por mostrar as pecas
void printarPecas(peca conjunto[]){
    for (int gerar = 0; gerar < 28; gerar++){
        printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
    }
    printf("\n\n");
}
