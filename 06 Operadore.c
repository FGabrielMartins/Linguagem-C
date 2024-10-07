#include <stdio.h>
int main(){
    float a,b,soma,sub,mul,div;

    printf("informe um valor:");
    scanf("%f", &a);
    printf("informe o segundo valor:");
    scanf("%f", &b);

    soma = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("Resultados:\n");
    printf("Soma = %.2f\n", soma);
    printf("Subtracao = %.2f\n", sub);
    printf("Multiplicacao = %.2f\n", mul);
    printf("Divisao = %.2f", div);
}