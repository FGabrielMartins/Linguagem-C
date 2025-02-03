#include <stdio.h>
#include <locale.h>

int main(){

    int cont, f, i;
    setlocale(LC_ALL, "portugues");

    for(cont=1; cont<=11; cont= cont+2){
        f=1;
        for(i=1; i<=cont; i++){
            f *= i;
        }
        printf("%d! = %d\n",cont,f);
    }

    return(0);
}