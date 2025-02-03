#include <stdio.h>
int main(){

    int mat[3][3];  //vetor

    mat[0][0] = 1;  //Primeira linha o indice é 0 // linha 0 coluna 0 da matriz
    mat[0][1] = 2;                                // linha 0 coluna 1 da matriz
    mat[0][2] = 3;                                // linha 0 coluna 2 da matriz

    mat[1][0] = 4;  //Segunda linha o indice é 1  // linha 1 coluna 0 da matriz
    mat[1][1] = 5;                                // linha 1 coluna 1 da matriz
    mat[1][2] = 6;                                // linha 1 coluna 2 da matriz

    mat[2][0] = 7;  //Terceira linha o indice é 2 // linha 2 coluna 0 da matriz
    mat[2][1] = 8;                                // linha 2 coluna 1 da matriz
    mat[2][2] = 9;                                // linha 2 coluna 2 da matriz

    printf("Imprimindo a primeira linha:\n");
    printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);

    printf("Imprimindo a segunda linha:\n");
    printf("%d %d %d\n", mat[1][0], mat[1][1], mat[1][2]);

    printf("Imprimindo a terceira linha:\n");
    printf("%d %d %d\n", mat[2][0], mat[2][1], mat[2][2]);

}