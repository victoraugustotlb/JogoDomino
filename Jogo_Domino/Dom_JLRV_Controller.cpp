//Dom_JLRV_Controller - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include <stdio.h>
#include <stdlib.h>
#include "Dom_JLRV_Controller.h"
#include "Dom_JLRV_View.cpp"
#include "Dom_JLRV_Model.h"

void menu(peca conjunto[]){
	int rodando = 1;
    geradorDomino(conjunto);
	while(rodando == 1){
		int escolha;
		printMenu();
		scanf("%d", &escolha);
		
		if(escolha == 1){
			menuJogar(conjunto);
		}
		else if(escolha == 2){
			limparTela();
            geradorDomino(conjunto);
            printarPecas(conjunto);
		}
		else if(escolha == 3){
            printarPecas(conjunto);
		}
        else if(escolha == 4){
            regras();
        }
		else if(escolha == 5){
			//salvarJogo();
		}
		else if(escolha == 6){
			//recuperarJogo();
		}
		else if(escolha == 0){
			rodando = 0;
		}
		else{
			printf("Opcao invalida. Tente novamente.\n");
		}
	}
}
//Funcao responsavel por iniciar 
void menuJogar(peca conjunto[]){
	limparTela();
	embaralharConjunto(conjunto);

	peca mao1[7], mao2[7];
    distribuirPecas(conjunto, mao1, mao2);

	peca carroca = encontrarMaiorCarroca(mao1, mao2);

	if(carroca.lado1 == -1){
		printf("Ninguem tem carroca!\n");
	}
	else{
		mostrarMesa(carroca);

	}

	printarMao(mao1);
	printarMao(mao2);
	submenu();
	while(1){
		char escolha;
		scanf(" %c", &escolha);
		if(escolha == 'J' || escolha == 'j'){
			//jogar();
		}
		else if(escolha == 'C' || escolha == 'c'){
			//comprar();
		}
		else if(escolha == 'P' || escolha == 'p'){
			//passar();
		}
		else if(escolha == 'S' || escolha == 's'){
			limparTela();
			break;
		}
		else{
			printf("Opcao invalida. Tente novamente.\n");
		}
	}
}


void embaralharConjunto(peca conjunto[]){
    for(int i = 27; i > 0; i--){ 
        int j = rand() % (i + 1); 
        peca temp = conjunto[i]; 
        conjunto[i] = conjunto[j]; 
        conjunto[j] = temp; 
    } 
}
//Funcao responsavel por distribuir as pecas para os jogadores
void distribuirPecas(peca conjunto[], peca mao1[], peca mao2[]){
    for(int i = 0; i < 7; i++){
        mao1[i] = conjunto[i];
        mao2[i] = conjunto[i + 7];
    }
}
