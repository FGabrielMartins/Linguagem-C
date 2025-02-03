#include <stdio.h>
#include <locale.h>

int main(){

    int n, cont,f=1;
    setlocale(LC_ALL, "portuguese");

    printf("Digite um numero:");
    scanf("%d", &n);

    if(n>=0){
        for(cont=1; cont<=n; cont++){
          f *= cont;
        }
        printf("%d! = %d",n,f);
    }else{
        printf("Nao existe fatorial de numero negativo.");
    }

    return(0);
}