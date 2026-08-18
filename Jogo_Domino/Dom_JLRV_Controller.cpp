//Dom_JLRV_PROJETO - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include "Dom_JLRV_Controller.h"
#include "Dom_JLRV_Model.cpp"
#include <stdio.h>
#include <stdlib.h>


void embaralharConjunto(peca conjunto[]){
	
	for(int i = 27; i > 0; i--){ 
        int j = rand() % (i + 1); 
        peca temp = conjunto[i]; 
        conjunto[i] = conjunto[j]; 
        conjunto[j] = temp; 
    } 
 
}
