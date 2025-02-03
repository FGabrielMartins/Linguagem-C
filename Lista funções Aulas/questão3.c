#include <stdio.h>
#include <locale.h>

void num(int n);

int main(){

    int x;
    setlocale(LC_ALL, "portguese");

    printf("Digite um numero:");
    scanf("%d", &x);
    num(x);
    return(0);
}
void num(int n){
    if(n%2==0){
        printf(">> %d: Par!",n);
    }else{
        printf(">> %d: impar!",n);
    }
}