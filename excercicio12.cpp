#include <iostream>

//Faça um programa que leia um número inteiro do usuário e verifique se é divisível por 3 e por 5. 
//Imprima 1 se for divisível por ambos, e 0 caso contrário.

int main(){

int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (&num %3 == 0 && num % 5 == 0); 
    {
        printf("1\n");
    } 
    else
    {
        printf("0\n");
    }
   
    return 0;
}