#include <stdio.h>
#include <locale.h>

int main(){

    int cont;
    setlocale(LC_ALL, "portuguese");

    for(cont=1; cont<=500; cont++){
        printf("%d ", cont);
    }

    return(0);
}