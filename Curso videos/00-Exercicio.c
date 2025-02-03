#include <stdio.h>
int main(){
    float v[3];
    int i;
    float media;

    for(i=0;i<=3;i++){
        printf("Digite sua nota:");
        scanf("%f", &v[i]);
    }

    media = (v[0]+v[1]+v[2]+v[3])/4;

    printf("Resultados:\n");
    printf("Media: %.2f\n", media);

    if(media>=7){
        printf("Aprovado!!");
    }

    if(media>=4 && media<7){
        printf("Recuperacao");
    }

    if(media<4){
        printf("Reprovado");
    }

}