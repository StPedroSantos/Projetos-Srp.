#include<stdio.h>

int main(){
/*
Incremento(++)
Pré Incremento ++a
Pós Incremento a++
Decremento (---)
Pré Decremento --a
Pós Decremento a--
*/

 int numero1 = 1;
 printf("Antes do incremento: %d\n", numero1);
numero1++;
printf("Apos o incremento: %d\n", numero1);

}
#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 5;
 
    // Operadores aritméticos
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
 
    // Operadores de atribuição
    a += 2; // a será 12
    b *= 3; // b será 15
 
    // Operadores de incremento e decremento
    a++; // a será 13
    b--; // b será 14
 
    // Exibição dos resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Novo valor de a (após += 2 e ++): %d\n", a);
    printf("Novo valor de b (após *= 3 e --): %d\n", b);
 
    return 0;
}







