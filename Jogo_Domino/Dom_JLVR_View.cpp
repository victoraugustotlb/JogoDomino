#include <stdio.h>
#include "Dom_JLVR_View.h"


void printarPecas(pecas conjunto[]){
	for (int gerar = 0; gerar < 28; gerar++){
		printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
	}
}

