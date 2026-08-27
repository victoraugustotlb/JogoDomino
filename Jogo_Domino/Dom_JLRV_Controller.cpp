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


void pecaInicial(peca jogador1[], peca jogador2[], peca *resultadoPeca)
{
    int maiorvalorcarroca = -1;
    peca melhorPeca = {-1, -1};
    
    int maiorSomaGeral = -1;
    peca maiorPecaGeral = {-1, -1};
    
    // Procura no Jogador 1
    for(int n = 0; n <= 7; n++) {
        // Verifica se é carroça
        if(jogador1[n].lado1 == jogador1[n].lado2) 
		{
            if (jogador1[n].lado1 > maiorvalorcarroca) 
			{
                maiorvalorcarroca = jogador1[n].lado1;
                melhorPeca = jogador1[n];
            }
        }
        

        int soma1 = jogador1[n].lado1 + jogador1[n].lado2;
        if (soma1 > maiorSomaGeral) 
		{
            maiorSomaGeral = soma1;
            maiorPecaGeral = jogador1[n];
        }
    							}


    for(int n = 0; n <= 7; n++) 
	{
        // Verifica se é carroça
        if(jogador2[n].lado1 == jogador2[n].lado2) 
		{
            if (jogador2[n].lado1 > maiorvalorcarroca) 
			{
                maiorvalorcarroca = jogador2[n].lado1; 
                melhorPeca = jogador2[n];
            }
        }
        

        int soma2 = jogador2[n].lado1 + jogador2[n].lado2;
        if (soma2 > maiorSomaGeral) 
		{
            maiorSomaGeral = soma2;
            maiorPecaGeral = jogador2[n];
        }
    }	

    
    if (maiorvalorcarroca != -1) 
    {
        *resultadoPeca = melhorPeca;
    } 
    else 
    {
        *resultadoPeca = maiorPecaGeral;
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
