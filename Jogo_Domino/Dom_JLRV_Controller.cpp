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


void turnoIA(peca jogador2[], mesa *mesaJogo, peca monte[], int *topoMonte) {

    bool acaoConcluida = false;
    while (!acaoConcluida) {

        int melhor_soma = -1;

        int indice_melhor = -1;

        char lado_melhor = ' ';

        int qtd_validas = 0;

        int codigo_validacao = -1;
        

        for (int i = 0; i < 21; i++) {

            if (jogador2[i].lado1 == -1 && jogador2[i].lado2 == -1) continue;
            

            int codE = validarJogada(jogador2[i], *mesaJogo, 'e');

            if (codE != -1) {

                qtd_validas++;

                int soma = jogador2[i].lado1 + jogador2[i].lado2;

                if (soma > melhor_soma) {

                    melhor_soma = soma;

                    indice_melhor = i;

                    lado_melhor = 'e';

                    codigo_validacao = codE;

                }

            }
            

            int codD = validarJogada(jogador2[i], *mesaJogo, 'd');

            if (codD != -1) {

                qtd_validas++;

                int soma = jogador2[i].lado1 + jogador2[i].lado2;

                if (soma > melhor_soma) {

                    melhor_soma = soma;

                    indice_melhor = i;

                    lado_melhor = 'd';

                    codigo_validacao = codD;

                }

            }

        }

        

		if (qtd_validas > 0) 
		{

            
            int ladoA = jogador2[indice_melhor].lado1;
            int ladoB = jogador2[indice_melhor].lado2;

            atualizarMesa(jogador2[indice_melhor], mesaJogo, lado_melhor, codigo_validacao);

            printf("\nA IA jogou a peca [%d|%d] no lado %c.\n", ladoA, ladoB, lado_melhor);

            
            jogador2[indice_melhor].lado1 = -1;
            jogador2[indice_melhor].lado2 = -1;

            acaoConcluida = true;

        }

        

        else {

            if (*topoMonte < 14) {

                comprarPeca(jogador2, monte, topoMonte);

                printf("A IA comprou uma peca do monte.\n");

                

            } else {

                

                printf("\nA IA passou a vez (monte vazio e sem jogadas).\n");

                acaoConcluida = true;

            }

        }

    }

}
