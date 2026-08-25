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
void menuJogo();

void menu(peca conjunto[]){
	int rodando = 1;
    geradorDomino(conjunto);
	while(rodando == 1){
		int escolha;
		printMenu();
		scanf("%d", &escolha);
		
		if(escolha == 1){
			embaralharConjunto(conjunto);
			printarPecas(conjunto);
		}
		else if(escolha == 2){
            geradorDomino(conjunto);
            printarPecas(conjunto);
		}
		else if(escolha == 3){
			limparTela();
            printarPecas(conjunto);
		}
		else if(escolha == 4){
			limparTela();
			menuJogo(conjunto);
		}
        else if(escolha == 5){
            rodando = 0;
        }
	}
}

void menuJogo(peca conjunto[]){
	int rodando = 1;
	while(rodando == 1){
		int escolha;
		subMenu();
		scanf("%d", &escolha);
		
		if(escolha == 1){
			//Jogo começa - 2 jogadores
			limparTela();
		    mesa(conjunto);
		}
		else if(escolha == 2){
			//Jogo começa - 2 jogadores
		}
		else if(escolha == 3){
			//Jogo começa - 2 jogadores
		}
		else if(escolha == 4){
			//Jogo começa - 2 jogadores
		}
		else if(escolha == 5){
			//Jogo começa - 2 jogadores
		}
		else if(escolha == 6){
			//Jogo começa - 2 jogadores
		}
		else if(escolha == 7){
			limparTela();
			rodando = 0;
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
