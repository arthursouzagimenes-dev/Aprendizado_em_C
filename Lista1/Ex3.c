#include <stdio.h>
/*Leia tres variaveis do tipo float representando notas de um aluno, considerando peso 1, 2 e
3, respectivamente. Calcule a m ´edia ponderada e imprima o resultado considerando 2 casas
decimais.*/

int main(){
    float a,b,c, media;
    printf("Digite a nota: ");
    scanf("%f", &a);
    printf("Digite a nota: ");
    scanf("%f", &b);
    printf("Digite a nota: ");
    scanf("%f", &c);
    media = (a * 1 + b * 2 + c * 3) / 6;
    printf("Sua média é de %.2f", media);

}