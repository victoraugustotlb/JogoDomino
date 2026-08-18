//Dom_JLRV_PROJETO - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include <stdio.h>
#include "Dom_JLVR_View.h"


void printarPecas(pecas conjunto[]){
	for (int gerar = 0; gerar < 28; gerar++){
		printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
	}
}

