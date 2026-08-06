/*Leia duas variaveis inteiras:
• valor pago pelo cliente;
• valor do produto.
Calcule o troco e determine a quantidade de:
• notas de 50;
• notas de 20;
• notas de 10;
• notas de 5;
• notas de 2;
• moedas de 1.
Restric¸ ˜ao: utilize apenas operacoes aritmeticas (/ e %), sem estruturas condicionais(if, else).
Dica: apos calcular cada quantidade de notas, atualize o valor restante do troco.*/

#include <stdio.h>

int main() {
    int valor_pago, preco_produto, troco_geral, nota50, nota20, nota10, nota5, nota2, nota1, resto;
    printf("Digite o valor pago: ");
    scanf("%d", &valor_pago);
    printf("Digite o preço do produto: ");
    scanf("%d", &preco_produto);
    troco_geral = valor_pago - preco_produto;
    nota50 = troco_geral / 50;
    resto = troco_geral % 50;
    nota20 = resto / 20;
    resto = resto % 20;
    nota10 = resto / 10;
    resto = resto % 10;
    nota5 = resto / 5;
    resto = resto % 5;
    nota2 = resto / 2;
    resto = resto % 2;
    nota1 = resto / 1;
    resto = resto % 1;

    printf("A compra deu um total de %d e foi paga com %d\n", preco_produto, valor_pago);
    printf("O troco foi total é de %d\n", troco_geral);
    printf("Notas de R$50 = %d \n notas de R$20 = %d \n notas de R$10 = %d \n notas de R$5 = %d \n notas de R$2 = %d \n moedas de R$1 = %d", nota50, nota20, nota10, nota5, nota2, nota1);

}