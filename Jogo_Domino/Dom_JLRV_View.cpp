//Dom_JLRV_View - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include "Dom_JLRV_View.h"
#include <stdio.h>
#include <stdlib.h>


//Menu principal do jogo
void printMenu(){
    printf("======Menu=====\n\n");
	printf("[1] - Embaralhar pecas\n");
	printf("[2] - Desembaralhar pecas\n");
	printf("[3] - Mostrar pecas\n");	
	printf("[4] - Jogar\n");
	printf("[5] - Sair\n");
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

//funcao responsavel por limpar o terminal 
void limparTela(){
	system("clear");
}

//Funcao responsavel por limpar o buffer do teclado
void fclear() {
  char carac;
  while( (carac = fgetc(stdin)) != EOF && carac != '\n') {}
 }
 
 void mesa(peca conjunto[]){
 	printf("=====Mesa=====\n");
 	printf("   [%d|%d]    \n", conjunto[14].lado1, conjunto[14].lado2);
 	printf("==============\n");
 	printf("Jogador 1: ");
 	for (int i = 0; i < 7; i++) {
 		printf("[%d|%d] ", conjunto[i].lado1, conjunto[i].lado2);
 	}
 	printf("\n\n");
 }
 
 void subMenu(){
 	printf("=====Jogar=====\n");
 	printf("[1] - Iniciar jogo(2 jogadores)\n");
 	printf("[2] - Iniciar jogo(contra o computador)\n");
 	printf("[3] - Retornar jogo interrompido\n");
 	printf("[4] - Regras gerais do jogo\n");
 	printf("[5] - Salvar o jogo\n");
 	printf("[6] - recuperar o jogo salvo\n");
 	printf("[7] - Sair\n");
 	printf("==============\n");
 	printf("Escolha uma opcao: ");
 }
