#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50

int main(){
    setlocale(LC_ALL, "portuguese");

    char s1[n] = {"Lógica de"};
    char s2[n] = {" Progamação!"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat (s1,s2);       //concatenar as duas s1 e s2

    printf("Depois do strcat:\n");
    puts(s1);
}