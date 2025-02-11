#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float a[5], b[5];

    // Leitura dos valores do vetor 'a'
    for (int i = 0; i < 5; i++) {
        printf("Digite um número real para a[%d]: ", i);
        scanf("%f", &a[i]);
    }

    // Preenchimento do vetor 'b' conforme as regras
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            b[i] = a[i]; // Índice zero mantém o valor
        } else if (i % 2 == 0) {
            b[i] = a[i] * 5; // Índices pares multiplicam por 5
        } else {
            b[i] = a[i] + 5; // Índices ímpares somam 5
        }
    }

    // Exibição dos vetores
    printf("\nVetor A: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", a[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", b[i]);
    }

    printf("\n");

    return 0;
}
