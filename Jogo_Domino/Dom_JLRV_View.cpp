//Dom_JLRV_View - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#include "Dom_JLRV_View.h"
#include <stdio.h>

//Menu principal do jogo
void printMenu(){
    printf("========================================\n");
    printf("              JOGO DOMINO\n");
    printf("========================================\n");
    printf("[1] - Iniciar jogo (2 jogadores)\n");
	printf("[2] - Iniciar jogo (contra o computador)\n");
	printf("[3] - Retornar ao jogo interrompido\n");
	printf("[4] - Regras gerais do Jogo\n");
	printf("[5] - Salvar o jogo em arquivo\n");
	printf("[6] - Recuperar o jogo salvo em arquivo\n");
	printf("[0] - Sair do programa\n");
	printf("Opcao selecionada: ");
}

//Funcao de Sub-menu da opcao jogar
void regras(){
	printf("========================================\n");
    printf("          REGRAS DO DOMINO\n");
    printf("========================================\n\n");

    printf("- 2 jogadores participam da partida.\n");
    printf("- Cada jogador recebe 7 pecas aleatorias.\n\n");

    printf("INICIO DA PARTIDA:\n");
    printf("- Comeca quem tiver a peca 6-6.\n");
    printf("- Se ninguem tiver, comeca quem tiver a maior\n");
    printf("  peca dupla: 5-5, 4-4, 3-3, etc.\n\n");

    printf("JOGADAS:\n");
    printf("- Os jogadores se alternam.\n");
    printf("- O jogador deve colocar uma peca em uma das\n");
    printf("  duas extremidades abertas da mesa.\n");
    printf("- Um dos numeros da peca deve ser igual ao numero\n");
    printf("  da extremidade escolhida.\n\n");

    printf("COMPRA DE PECAS:\n");
    printf("- O jogador pode comprar quantas pecas quiser.\n");
    printf("- Pode comprar para conseguir uma peca que permita\n");
    printf("  jogar ou para blefar.\n");
    printf("- Se nao puder jogar, deve comprar ate conseguir\n");
    printf("  jogar ou ate o deposito ficar vazio.\n\n");

    printf("PASSAR A VEZ:\n");
    printf("- So pode passar se nao tiver nenhuma jogada possivel\n");
    printf("  e o deposito estiver vazio.\n\n");

    printf("FIM DA PARTIDA:\n");
    printf("- Se um jogador colocar sua ultima peca, ele 'bate'\n");
    printf("  e vence a partida.\n");
    printf("- Se o deposito estiver vazio e nenhum jogador puder\n");
    printf("  jogar, a partida fica fechada.\n\n");

    printf("PARTIDA FECHADA:\n");
    printf("- Vence quem tiver a menor quantidade de pecas.\n");
    printf("- Se houver empate, soma-se os pontos das pecas restantes.\n");
    printf("- Vence quem tiver a menor soma de pontos.\n\n");

    printf("EMPATE:\n");
    printf("- Ocorre somente se os dois jogadores tiverem a mesma\n");
    printf("  quantidade de pecas e a mesma soma de pontos.\n\n");

    printf("REGRA GERAL:\n");
    printf("- Vence quem terminar com menos pecas.\n");
    printf("- Em caso de empate na quantidade, vence quem tiver\n");
    printf("  menos pontos.\n");

    printf("========================================\n");
}

//Submenu de opcoes do jogo
void submenu(){
	printf("[J] - Jogar (possiveis n1 ou n2)\n");
	printf("[C] - Comprar (a qualquer momento)\n");
	printf("[P] - Passar (permitido somente em caso especial)\n");
	printf("[S] - Sair (interromper o jogo voltando ao menu inicial)\n");
	printf("Opcao selecionada: ");
}

//Funcao responsavel por mostrar a mesa do jogo
void mostrarMesa(peca carroca){
    printf("==================Mesa==================\n");
    printf("                [%d|%d]\n", carroca.lado1, carroca.lado2);
    printf("========================================\n");
}


//Funcao responsavel por mostrar as pecas
void printarPecas(peca conjunto[]){
    for (int gerar = 0; gerar < 28; gerar++){
        printf("[%d|%d]", conjunto[gerar].lado1, conjunto[gerar].lado2);
    }
    printf("\n\n");
}

//funcao responsavel por limpar o terminal 
void limparTela(){
	system("clear");
}

void printarMao(peca mao[]){
    for(int i = 0; i < 7; i++){
        printf("[%d|%d]", mao[i].lado1, mao[i].lado2);
    }
    printf("\n");
}

/*
ENTREGA LP2
O jogo consiste de: 
 Distribuir 7 pecas para cada jogador aleatoriamente
 Definir o jogador que fara a primeira jogada
 Permitir o jogador comprar uma peca do conjunto pecas
 Sistema deve verificar se a jogada eh valida, ou seja, se a peca colocada tem a mesma pontuacao da peca da extremidade escolhida
 Fazer uma "mesa" para mostrar o jogo
 Permitir o usuario ver apenas as suas pecas
 Permitir o usuario esconder as pecas do outro jogador 
 Permitir o usuario finalizar o jogo 
 Permitir o usuario ver as regras do jogo 
*/
