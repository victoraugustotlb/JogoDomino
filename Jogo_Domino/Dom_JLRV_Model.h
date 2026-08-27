//Dom_JLRV_Model - Projeto Domino
//17/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi

#ifndef DOM_JLRV_MODEL_H
#define DOM_JLRV_MODEL_H

typedef struct {
    int lado1;
    int lado2;
} peca;
void geradorDomino(peca conjunto[]);

void pecaInicial(peca jogador1[], peca jogador2[], peca *resultadoPeca);

#endif
