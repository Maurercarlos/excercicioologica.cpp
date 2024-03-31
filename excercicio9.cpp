#include <iostream>

//Escreva um programa que leia um número inteiro do usuário e verifique se é positivo e par. 
//Imprima 1 se for positivo e par, e 0 caso contrário.

int main(){

int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (&num > 0 && num % 2 == 0); 
    {
        printf("1\n");
    } 
    else
    {
        printf("0\n");
    }
   
    return 0;
}