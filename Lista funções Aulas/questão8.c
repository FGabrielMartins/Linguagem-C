#include <stdio.h>
#include <locale.h>

int fatorial(int f);

int main(){

    int x, fa;
    setlocale(LC_ALL, "portuguese");

    printf("Digiete um numero maior ou igual a 0: ");
    scanf("%d", &x);

    if(x>=0){
        fa = fatorial(x);
        printf("O fatorial %d! = %d",x,fa);
    }else{
        printf("Numero incorreto");
    }
    return(0);
}
int fatorial(int f){
    int resultados = 1;

    for (int i=1; i<=f; i++){
        resultados *= i;
    }

    return(resultados);
}