#include <stdio.h>
int main(){
    float m;
        printf("informe sua nota:");
        scanf("%f", &m);

        if (m >= 7){          // Se a condição for verdadeira o bloco será executado, se não é ignorado.  Aberto e fechado por {}
            printf("Aluno aprovado!");
        }
}