#include <stdio.h>
#include <locale.h>

void num(int n);

int main(){

    int x;
    setlocale(LC_ALL, "portuguese");

    printf("Digite um numero:");
    scanf("%d", &x);
    num(x);
    return(0);
}
void num(int n){
    if(n>0){
        printf(">> %d: Positivo!",n);
    }else if(n<0){
        printf(">> %d: Negativo!",n);
    }else{
        printf(">> %d: Neutro!",n);
    }
}