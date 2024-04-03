#include <iostream>

//Escreva um programa que leia um número inteiro do usuário e verifique se é positivo e par. 
//Imprima 1 se for positivo e par, e 0 caso contrário.

int main(){

int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado;

    resultado = (("%d\n", (num > 0) && (num % 2 == 0)));

    printf("%d\n", resultado);

    return 0; 
   
}