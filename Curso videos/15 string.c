#include <stdio.h>
int main(){

    char s[10];                      //Salva até 9 caracteres úteis o ultimo caracter tem que ser o /0

    printf("Digite Nome e sobrenome:");          
    scanf("%s", s);                  //não precisa do & //scanf convencional // não ler espaços
    fflush(stdin);                   // uma boa prática usar essa função sempre que tiver entrada de dados de texto

    printf("Resultado do scanf convencional: %s\n\n", s);

    printf("Digite seu nome e sobrenome:");
    scanf("%9[^\n]s", s);            // scanf aprimorado lendo espaços "%tamanho-1[^\n]s"
    fflush(stdin);

    printf("Resultado do scanf aprimorado: %s", s);
}