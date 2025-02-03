#include <stdio.h>
#include <locale.h>

int main(){

    int cont, x;
    setlocale(LC_ALL,"portuguese");

    for(cont=1; cont<=10; cont++){
        printf("Digite sua idada >> ");
        scanf("%d", &x);

        if(x>=18){
            printf("Maior de idade!\n");
        }else{
            printf("Menor de idade!\n");
        }
    }

    return(0);
}