#include <stdio.h>
/*Leia uma temperatura em celsius. Calcule a temperatura correspondente em Fahrenheit
utilizando a formula:
F = 9
    5 · C + 32
Imprima o resultado na tela, considerando 2 casas decimais.
Dica: utilize valores decimais na divis ˜ao para garantir o calculo correto.*/

int main() {
    float c, f;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &c);
    f = ((9.0/5.0) * c) + 32;
    printf("a temperatura em fahrenheit é de: %.2f", f);

}