#include <stdio.h>
int main(){
    int idade, ano;
    printf("informe sua idade:");
    scanf("%d", &idade);
    printf("informe o ano de seu nascimento:");
    scanf(" %d", &ano);
    printf("A sua idade e: %d\n", idade);
    printf("O ano de seu nascimento e: %d", ano);
}