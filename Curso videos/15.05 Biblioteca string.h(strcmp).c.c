#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50

int main(){
    setlocale(LC_ALL, "portuguese");

    char hardtext[n] = {"/exit"};   //Ver se as duas são iguais
    char senha_usr[n];              //Ver se as duas são iguais 
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardtext, senha_usr); //strcmp compara se as duas são igual

    if(ok == 0){
        printf("Textos iguais");
    } else 
        printf("Textos diferentes");

}