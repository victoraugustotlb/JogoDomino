#include "Dom_JLRV_Controller.h"
#include <stdio.h>

void ordenarPecas(){
	for (int gerar = 0; gerar < 28; gerar++){
		printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
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
