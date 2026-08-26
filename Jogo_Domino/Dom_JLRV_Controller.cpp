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
			embaralharConjunto(conjunto);
			printarPecas(conjunto);
		}
		else if(escolha == 2){
            geradorDomino(conjunto);
            printarPecas(conjunto);
		}
		else if(escolha == 3){
            printarPecas(conjunto);
		}
        else if(escolha == 4){
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

void distribuirPecas(peca conjunto[], peca jogador1[], peca jogador2[]){
	int cont = 0;
	int num;
	for(int i = 27; i > 12; i--){
		if(i >= 20){
			num = (i - 27) * -1;
			jogador1[num] = conjunto[i];
		}
		else{
			num = (i - 19) * -1;
			jogador2[num] = conjunto[i];
		}
	}
}
