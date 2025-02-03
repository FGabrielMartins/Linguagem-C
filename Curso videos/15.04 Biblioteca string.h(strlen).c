#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50
int main(){
    setlocale(LC_ALL,"portuguese");
    
    char s[n];
    int i;

    printf("Digite um texto:");
    gets(s);
    i = strlen(s);          //Saber quantas carcteres o usuario digitou  (Tamanho do texto)
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    puts(s);

}