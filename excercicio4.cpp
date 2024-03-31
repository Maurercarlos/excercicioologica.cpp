#include <iostream>

//Faça um programa que leia um número inteiro do usuário e verifique se é positivo. 
//Imprima 1 se for positivo e 0 se for negativo.
int main(){

int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (&num > 0); 
    {
        printf("1\n");
    } 
    else
    {
        printf("0\n");
    }
   
    return 0;
}