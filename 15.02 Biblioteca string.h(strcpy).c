#include <stdio.h>
#include <string.h>
#include <locale.h>  //setlocale(LC_ALL,"portuguese"); //trabalhar com acentos

#define n 20

int main(){
    setlocale(LC_ALL,"portuguese");

    char origem[n] = {"Olá mundo"};
    char destino[n];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino,origem);    // comando usado para atribuir o conteudo de origem para dentro de destino

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

}