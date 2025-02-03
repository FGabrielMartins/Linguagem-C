#include <stdio.h>
#include <locale.h>

int main(){

    int cont, soma=0;
    setlocale(LC_ALL, "portuguese");

    for (cont=0; cont<=500; cont=cont+2){
        soma=cont+soma;
    }

    printf("somatorio = %d ", soma);

    return(0);
}