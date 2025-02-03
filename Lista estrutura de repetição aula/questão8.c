#include <stdio.h>
#include <locale.h>

int main() {
    int x, y, cont, i, div;

    setlocale(LC_ALL, "portuguese");

    // Entrada dos valores x e y
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    // Verifica se os valores são naturais maiores que zero
    if (x <= 0 || y <= 0) {
        printf("Os números devem ser naturais maiores que zero.\n");
        return 1; // Sai do programa
    }

    // Ajusta o intervalo para garantir que x seja sempre menor que y
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("Números primos entre %d e %d:\n", x, y);

    // Loop que percorre o intervalo de x até y
    for (cont = x; cont <= y; cont++) {
        div = 0; // Reinicia o contador de divisores

        // Verifica quantos divisores o número possui
        for (i = 1; i <= cont; i++) {
            if (cont % i == 0) {
                div++; // Conta os divisores
            }
        }

        // Se tiver exatamente 2 divisores (1 e ele mesmo), é primo
        if (div == 2) {
            printf("%d ", cont);
        }
    }
    
    printf("\n"); // Quebra de linha para organizar a saída

    return 0;
}