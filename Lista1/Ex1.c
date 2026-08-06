#include <stdio.h>

/* Leia duas vari ´aveis do tipo float. Calcule e imprima, considerando 2 casas decimais:
• a soma;
• o produto entre os valores.*/

int main() {
    float a,b,c,d;
    printf("Digite o valor de a:");
    scanf(" %f", &a);
    printf("Digite o valor de b: ");
    scanf(" %f", &b);
    c = a + b;
    d = a * b;
    printf("a soma é de:%.2f ",c);
    printf("o produto é de:%.2f", d);
}