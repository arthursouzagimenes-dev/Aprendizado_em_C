/*Leia o dividendo e divisor de uma fracao. Calcule e imprima:
• o quociente da divisao inteira;
• o resto da divisao*/

#include <stdio.h>

int main () {
    int dividendo, divisor, quo, resto;
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    
    quo = dividendo / divisor;
    resto = dividendo % divisor;
    printf("O quociente é %d e o resto é %d", quo, resto);
}