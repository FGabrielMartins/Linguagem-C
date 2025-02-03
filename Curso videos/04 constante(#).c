#include <stdio.h>

#define texto "Entrada e saida de dados."

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

        printf("informe sua idade:");
        scanf("%d", &idade);
        printf("informe sua altura:");
        scanf("%f", &altura);
        printf("informe seu nome:");
        scanf("%s", nome);             //para char (texto não precisa do e comercial (&)

        printf("Seus dados informados foram:\n");
        printf("Idade: %d\n", idade);
        printf("Altura: %.2f\n", altura);
        printf("Nome: %s\n", nome);

}