#include <stdio.h>
#include <locale.h>
#include <math.h>

float area(float a);

int main(){

    float x,a;
    setlocale(LC_ALL, "portuguse");

    printf("Digite o valor do raio da circunferencia:");
    scanf("%f", &x);
    a = area(x);
    printf("A area da circunferencia e = %.2f",a); 
    return(0);
}
float area(float a){
    return(3.14*pow(a,2));
}