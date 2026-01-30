## Estrutura Condicional em C

2026-01-28 07:04

**Subjects**: [[sintaxe]]

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Notes

#### Estrutura Simples

```C
if(<condition>)
	<command>;
```

Na opção acima, não precisamos utilizar os brackets para o comando, já que se for o caso de apenas um comando ele o executará normalmente.

```C
if(<condition>){
	<command>;
	<command2>;
	<command3>;
}
```

No uso de 2 ou mais comandos, se faz necessário o uso dos brackets.
#### Estrutura Composta

```C
if(<condition>)
	<command>;
else
	<command2>;
```

Caso a primeira condição for satisfeita, será executado o primeiro comando e assim finalizará a estrutura de condição. Se caso o `if` não corresponder, o else será executado. - Reforçando, com um comando apenas não é necessário o uso de brackets.

```c
if(<condition>){
	<command1>;
	<command2>;
	<command3>;
}
else{
	<command4>;
	<command5>;
	<command6>;
}
```

Com a execução de mais de dois comandos, é preciso o uso dos brackets.
#### Estrutura Case

A estrutura case é utilizada na necessidade de uma condição específica da variável que se caso corresponda, vai executar algo.

```C
switch(<variable>){
	case value1:
		<command block>;
		break;
	case value2:
		<command block>;
		break;
	default:
		<command>;
}
```

Exemplo de código:

```C
#include <stdio.h>

int main(){
    
    int x;
    scanf("%d",&x);
    
    switch(x){
        case 1:
            printf("Um");
            printf("One");
            break;
        case 2:
            printf("Two");
            printf("Dois");
            break;
        default:
            printf("Olá mundo!");
    }   
}
```