//Dom_JLRV_MODEL - Projeto Domino
//13/08/2026
//Joao Pedro Lemos Romano Francisco da Silva
//Leopoldo Ortuzal Zuchieri
//Renato Corral Silva
//Victor Augusto Toledo Lucio Borghi


// Struct dos lados do domino
typedef struct{
    int lado1;
    int lado2;
}peca;

// Array das pecas
peca conjunto[28];

void geradorDomino(){
    int vetor = 0;

    for (int i =0; i <= 6; i++){
        for (int j = i; j <= 6; j++){
            conjunto[vetor].lado1 = i;
            conjunto[vetor].lado2 = j;
            vetor++;
        }
    }
}

