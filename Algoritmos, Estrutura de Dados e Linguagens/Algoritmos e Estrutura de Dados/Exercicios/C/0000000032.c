// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento.

#include <stdio.h>

int main(){
    float salario;
    scanf("%f",&salario);
    if(salario < 500)
        salario = salario * 1.30;
    else
        printf("Salario nao reajustado.\n");
    printf("%.2f\n",salario);
}