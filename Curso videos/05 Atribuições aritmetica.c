#include <stdio.h>
int main (){
    int dado = 10;
    printf("Dado antes dos incrementos: %d\n", dado);

    dado ++;  //Incremento de 1    Não recebe =
    printf("Depois do incremento ++ : %d\n", dado);

    dado --;  //Decremento de 1    Não recebe =
    printf("Depois do decremento -- : %d\n", dado);

    dado += 3;  //Incremento genérico (qualquer valor)   
    printf("Depois do incremento += : %d\n", dado);

    dado -= 2;  //Decremento genérico (qualquer valor)   
    printf("Depois do decremento -= : %d\n", dado);

    dado *= 10; //Atribuição com multiplicação
    printf("Depois do incremento *= : %d\n", dado);

    dado /= 10; //Atribuição com divisão
    printf("Depois do decremento /= : %d\n", dado);
}