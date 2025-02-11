#include <stdio.h>
#include <locale.h>

int main(){

    int numero[10], maior;
    setlocale(LC_ALL, "portuguese");

    for(int i=0; i<=9; i++){
        printf("Digite um numero:");
        scanf("%d",&numero[i]);
    }

    maior = numero[0];

    for(int i=0; i<=9; i++){
        if(numero[i]> maior){
            maior = numero[i];
        }
    }

    printf("Maior numero digitado:%d",maior);

    return(0);
}