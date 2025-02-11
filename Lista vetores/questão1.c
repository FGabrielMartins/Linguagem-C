#include <stdio.h>
#include <locale.h>

int main(){

    int vet[8];
    setlocale(LC_ALL, "portuguese");

    for(int i=0; i<=7; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(int i=7; i>=0; i--){
        printf("%d ", vet[i]);
    }

    return(0);
}