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
	printf("[1] - Embaralhar pecas\n");
	printf("[2] - Desembaralhar pecas\n");
	printf("[3] - Mostrar pecas\n");	
	printf("[4] - Sair\n");
	printf("[5] - Jogar\n");
	printf("\n===============\n");
	printf("Escolha uma opcao: ");
}

//Funcao de Sub-menu da opcao jogar

void submenu(){
	printf("[1] - Escolher quantidade de jogadores\n"); //Minimo 1 e Maximo 2
	printf("[2] - Iniciar\n");
}


//Funcao responsavel por mostrar as pecas
void printarPecas(peca conjunto[]){
    for (int gerar = 0; gerar < 28; gerar++){
        printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
    }
    printf("\n\n");
}

/*
ENTREGA LP2
O jogo consiste de: 
 Distribuir 7 pecas para cada jogador aleatoriamente
 Definir o jogador que fara a primeira jogada
 Permitir o jogador comprar uma peca do conjunto pecas
 Sistema deve verificar se a jogada eh valida, ou seja, se a peca colocada tem a mesma pontuacao da peca da extremidade escolhida
 Fazer uma "mesa" para mostrar o jogo
 Permitir o usuario ver apenas as suas pecas
 Permitir o usuario esconder as pecas do outro jogador 
 Permitir o usuario finalizar o jogo 
 Permitir o usuario ver as regras do jogo 
*/
