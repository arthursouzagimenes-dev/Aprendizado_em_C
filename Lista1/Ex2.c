/* Leia duas vari ´aveis do tipo float:
• uma representando a dist ˆancia percorrida (em km);
• outra representando o tempo gasto (em horas).
Calcule e imprima considerando 1 casa decimal a velocidade media do percurso em (km/h) e
em (m/s).
Dica: v=d/t e 1 m/s = 3,6 km/h*/

#include <stdio.h>

int main(){
    float t ,d, v, ms;
    printf("Digite a distancia em km: ");
    scanf("%f", &d);
    printf("Digite o tempo: ");
    scanf("%f", &t);
    v = d/t;
    ms = v/3.6;
    printf("a velocidade em km é de: %.1f, e em m/s é de: %.1f ", v, ms);
}