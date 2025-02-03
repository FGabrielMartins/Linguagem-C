#include <stdio.h>
#include <locale.h>

int main(){

    float n1, n2, n3, m, cont;
    setlocale(LC_ALL,"portuguese");

    for(cont=1; cont<=10; cont++){
        printf("Digite sua N1 >> ");
        scanf("%f", &n1);
        printf("Digite sua N2 >> ");
        scanf("%f", &n2);
        printf("Digite sua N3 >> ");
        scanf("%f", &n3);

        m = (n1+n2+n3)/3;

        if(m>=9){
            printf("Media = %f E conceito A", m);
        }else if(m>=7 && m<9){
            printf("Media = %f E conceito B", m);
        }else if(m>=6){
            printf("Media = %f E conceito C", m);
        }else if(m>=4){
            printf("Media = %f E conceito D", m);
        }else{
            printf("Media = %f E conceito e", m);
        }
    }
    return(0);
}