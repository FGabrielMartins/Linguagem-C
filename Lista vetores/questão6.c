#include <stdio.h>
#include <locale.h>

int main(){

    int v1[5], v2[5];
    setlocale(LC_ALL, "portuguese");

    for(int i=0; i<=4; i++){
        printf("Digite o numero do indice v1[%d]:",i);
        scanf("%d",&v1[i]);
    }


    for(int i=0; i<=4; i++){
        v2[i] = 1;
        for(int m=1; m<=v1[i]; m++){
            v2[i]= v2[i]*m;
        }
    }

    printf("\nVetor V1: ");
    for(int i=0; i<=4; i++){
        printf("%d ",v1[i]);
    }

    printf("\nVetor V2: ");
    for(int i=0; i<=4; i++){
        printf("%d ",v2[i]);
    }

    return(0);
}