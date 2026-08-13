#include "Dom_JLRV_Controller.h"
#include "Dom_JLRV_View.cpp"
#include <stdio.h>

void embaralharConjunto(peca conjunto[]){
	
	for(int i = 27; i > 0; i--){ 
        int j = rand() % (i + 1); 
        peca temp = conjunto[i]; 
        conjunto[i] = conjunto[j]; 
        conjunto[j] = temp; 
    } 
 
}
