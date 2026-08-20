//Dom_JLRV_View - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include <stdio.h>

#include "Dom_XXXXX_View.h"

//SOMENTE AQUI NO VIEW, podemos ter "printf" e "scanf"

//Apresenta todas as peças
void apresentarPecas()
{
	printf("\n");
	for (int i = 0; i < 28; i++)
		printf("[%d|%d] ", pecas[i].lado1, pecas[i].lado2);
	printf("\n\n");
}
