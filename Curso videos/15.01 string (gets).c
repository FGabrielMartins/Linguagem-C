#include <stdio.h>
int main(){
    char s[10];

    printf("Digite algo (Leitura pelo gets):\n");
    gets(s);                // Não limita a quntiade de letras de entrada
    fflush(stdin);          // stdin limpa o teclado para não ficar lixo em memória

    puts("Resultados:");
    puts(s);
    puts("");

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(s, 10, stdin);     // limita a quntiade de letras de entrada
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    puts("");
}