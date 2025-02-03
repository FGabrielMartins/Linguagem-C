#include <stdio.h>
#include <locale.h>

void num (int n);

int main(){
    int x;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um numero:");
    scanf("%d", &x);
    num(x);
    return(0);
}
void num (int n){
    if(n==0){
        printf("O numero digitado foi 0");
    }else{
        printf("O numero digitado e diferente de 0");
    }
}