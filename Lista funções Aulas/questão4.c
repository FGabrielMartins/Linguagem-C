#include <stdio.h>
#include <locale.h>

void num(int n);

int main(){

    int x;
    setlocale(LC_ALL, "portuguese");

    printf("Informe sua idade:");
    scanf("%d", &x);
    num(x);
    return(0);
}
void num(int n){
    if(n>=18){
        printf(">>Maior de idade!");
    }else{
        printf(">>Menor de idade!");
    }
}