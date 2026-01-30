// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba três números e mostre o maior.

#include <stdio.h>

int main(){

    float n1,n2,n3;
    scanf("%f%f%f",&n1,&n2,&n3);
    if(n1 > n2 && n1 > n3){
        printf("%f",n1);
    }
    else if(n2 > n1 > n3){
        printf("%f",n2);
    }
    else{
        printf("%f",n3);
    }

}