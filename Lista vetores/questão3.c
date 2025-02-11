#include <stdio.h>
#include <locale.h>

int main(){

    int numero[5], soma=0;
    setlocale(LC_ALL, "portuguese");

    for(int i=0; i<=4; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        soma += numero[i];
    }

    printf("Soma:%d",soma);

    return(0);
}