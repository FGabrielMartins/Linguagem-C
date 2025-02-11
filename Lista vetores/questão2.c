#include <stdio.h>
#include <locale.h>

int main(){

    char nome[30];
    setlocale(LC_ALL, "portugues");

    int j = 1;
    setlocale(LC_ALL, "portuguese");

    printf("Digite seu nome: ");
    gets(nome);

    while(nome[j] != '\0'){
        j=j+1;
    }

    printf(">>> QTD de letras:%d",j);

    return(0);
}