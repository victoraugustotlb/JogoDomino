//Dom_JLRV_PROJETO - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi


#include <stdio.h>
#include "Dom_JLRV_Model.cpp"
#include "Dom_JLVR_View.cpp"
#include "Dom_JLRV_Controller.cpp"

int main(){
    geradorDomino();
    ordenarPecas();
	int rodando = 1;
	while(rodando == 1){
		int escolha;
		printMenu();
		scanf("%d", &escolha);
		if(escolha == 1){
			
		}
		else if(escolha == 2){

		}
		else if(escolha == 3){

		}
	}
    return 0;
}
