//Dom_JLRV_Controller - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

void gerarPecas();
void embaralharPecas();

struct Peca
	{
	int lado1;
	int lado2;
	char status;  //NULL, '1', '2', 'M'
	              //NULL=disponivel, 1=com o jogador 1, 2=com o jogador 2, M=sobre a mesa
	} pecas[28];

//variaveis globais

int mesaE, mesaD;   //extremidades Esquerda e Direita da mesa
int qtmesa;   		//qtde de pecas na mesa
//etc
