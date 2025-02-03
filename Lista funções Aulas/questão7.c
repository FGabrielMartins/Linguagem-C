#include <stdio.h>
#include <locale.h>

float volume(float c, float l, float a);

int main(){

    float x, y, z, v;
    setlocale(LC_ALL, "portugues");

    printf("Informe o comprimento da caixa:");
    scanf("%f", &x);
    printf("Informe a largura da caixa:");
    scanf("%f", &y);
    printf("Informe a altura da caixa:");
    scanf("%f", &z);
    v = volume(x,y,z);
    printf("O volume da ciaxa = %.2f",v);
    return(0);
}
float volume(float c, float l, float a){
    return(c*l*a);
}