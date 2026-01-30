// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

#include <stdio.h>

int main(){
    float custofabrica,precoconsumidor;
    scanf("%f",&custofabrica);
    if(custofabrica <= 12000)
        precoconsumidor = custofabrica * 1.05;
    else if(custofabrica > 12000 && custofabrica <= 25000)
        precoconsumidor = custofabrica * 1.25;
    else
        precoconsumidor = custofabrica * 1.35;
    printf("%.2f",precoconsumidor);
    return 0;
}