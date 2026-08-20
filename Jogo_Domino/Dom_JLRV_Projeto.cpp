//Dom_JLRV_Controller - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

//no DEV-C++ basta comandar a compilação por este arquivo que contem o main()

//a ordem destes includes é importante
#include "Dom_JLRV_Model.cpp"
#include "Dom_JLRV_Controller.cpp"

main()
{
	//FUNÇÕES DE INICIALIZAÇÃO
	//aqui ficam as funções que são chamadas e executadas uma única vez !
	gerarPecas();   //fica no Model
	jogar();    	//fica no Controller	
	
}

