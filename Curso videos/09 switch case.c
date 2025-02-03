#include <stdio.h>
int main(){
    int d;

    printf("Informe um numero referente a algum dia da semana (de 1 a 7):");
    scanf("%d", &d);

    switch (d) {              //Somente usado em comparações de igualdade
        case 1:
            printf("Domingo");
        break;

        case 2:
            printf("Segunda-feira");
        break;

        case 3:
            printf("Terça-feira");
        break;

        case 4:
            printf("Quarta-feira");
        break;

        case 5:
            printf("Quinta-feira");
        break;

        case 6:
            printf("Sexta-feira");
        break;

        case 7:
            printf("Sabado");
        break;

        default:
            printf("Opcao invalida");
        break;
    }
}