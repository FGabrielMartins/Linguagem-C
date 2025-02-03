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
    if(n%5==0){
        printf(">> %d: E multiplo de 5",n);
    }else{
        printf(">> %d: Nao e multiplo de por 5",n);
    }
}