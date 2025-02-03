#include <stdio.h>
#include <locale.h>

float notas(float n1, float n2, float n3);
void media(float m);

int main(){

    float x, y, z, m;
    setlocale(LC_ALL, "portuguese");

    printf("Informe suas 3 notas:");
    scanf("%f %f %f", &x, &y, &z);
    m = notas(x,y,z);
    media(m);
    return(0);
}
float notas(float n1, float n2, float n3){
    return((n1+n2+n3)/3);
}
void media(float m){
    if(m>=9){
        printf(">>Conceito A");
    }else if(m>=7){
        printf(">>Conceito B");
    }else if(m>=6){
        printf(">>Conceito C");
    }else if(m>=4){
        printf(">>Conceito D");
    }else{
        printf(">>Conceito E");
    }
}