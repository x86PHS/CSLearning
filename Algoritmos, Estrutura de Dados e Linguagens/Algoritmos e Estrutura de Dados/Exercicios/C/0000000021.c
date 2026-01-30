// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
// a) a hora trabalhada vale 1/8 do salário mínimo;
// b) a hora extra vale 1/4 do salário mínimo;

int main(){
    float horastrabalho,salariominimo,horasextras;
    printf("Horas trabalhadas: ");scanf("%f",&horastrabalho);
    printf("Salario minimo: ");scanf("%f",&salariominimo);
    printf("Horas extras: ");scanf("%f",&horasextras);
    float salario;
    salario = ((salariominimo * 1/8) * horastrabalho) + (salariominimo * (horasextras * 1/4));
    printf("%.2f",salario);
    return 0;
}