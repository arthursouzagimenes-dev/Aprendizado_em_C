/*Leia uma variavel inteira representando um tempo total em segundos. Calcule e imprima,
considerando 2 casas decimais:
• a quantidade de minutos;
• os segundos restantes.*/

#include <stdio.h>

int main(){
    int x, min, seg_rest;
    printf("Digite os segundos: ");
    scanf("%d", &x);
    min = x / 60;
    seg_rest = x % 60;
    printf("Os minutos são %.2f e sobraram %.2f segundos", (float)min, (float)seg_rest);
}