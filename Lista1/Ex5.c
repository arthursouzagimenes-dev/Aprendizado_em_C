#include <stdio.h>
/*Leia a base e a altura de um retangulo. Calcule e imprima, considerando 2 casas decimais:
• a area;
• o perımetro.
area = base × altura
perımetro = 2 × (base + altura)*/
int main(){
    float base, altura, peri, area;
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    area = base * altura;
    peri = (base + altura) * 2;
    printf("A área é de %.2f e o perimetro é de %.2f", area, peri);

}