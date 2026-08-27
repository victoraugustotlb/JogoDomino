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

