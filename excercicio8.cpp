#include <iostream>
// Escreva um programa que leia três números inteiros do usuário e 
//verifique se esses números podem formar os lados de um triângulo. Imprima 1 se puderem formar um triângulo e 0 se não puderem.

int main (){

int num1;
int num2;
int num3;

printf("Escreva o primeiro número: ");
scanf("%d", &num1);

    printf("Escreva o segundo número: ");
    scanf("%d", &num2);

        printf("Escreva o terceiro número: ");
        scanf("%d", &num3);

    printf("%d\n", (num1 + num2 > num3));

    return 0;

}