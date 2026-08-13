#include <stdio.h>
#include "Dom_JLVR_View.h"
#include "Dom_JLRV_Model.cpp"


void ordenarPecas(){
	for (int gerar = 0; gerar < 28; gerar++){
		printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
	}
}
