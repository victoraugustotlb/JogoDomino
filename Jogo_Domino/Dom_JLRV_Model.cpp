//Dom_JLRV_Controller - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include <stdlib.h>
#include <time.h>   //necessário pois contem a variavel NULL
#include "Dom_JLRV_Model.h"


//gerar as pecas
void gerarPecas()
{
	int p, i, j;
	//gerar as 28 pecas
	p = 0;
	for (i = 0; i <= 6; i++)
		for(j = i; j <= 6; j++)
		 {
		 	pecas[p].lado1 = i;
		 	pecas[p].lado2 = j;
		 	pecas[p].status = NULL;
		 	p++;
		 }
}

//embaralhar as peças
void embaralharPecas()
{
	int i, pos;
	struct Peca vaux;  //peca auxiliar
	
	srand(time(NULL));
	for (int i = 0; i < 28; i++)
	  {
		pos = rand() % 28;   //gera de 0 a 27
		//troca as pecas
		vaux = pecas[i];
		pecas[i] = pecas[pos];
		pecas[pos] = vaux;
	  }

}

