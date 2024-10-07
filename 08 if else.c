#include <stdio.h>
int main(){
    float m;

    printf("informe sua nota:");
    scanf("%f", &m);

    if (m >= 7){               // Se for verdadeiro será executado se não será ignorado
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");  // Se for falso será executado se não será ignorado
    }
}