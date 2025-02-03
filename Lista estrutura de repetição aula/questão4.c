#include <stdio.h>
#include <locale.h>

int main(){

    int cont, num=0;
    setlocale(LC_ALL, "portuguese");

    for(cont = 10; cont <= 50; cont++){
        if(cont%2==0){
            printf("%d ", cont);
            num ++;
        }
    }
            printf("\nQTD: %d", num);
    return(0);
}