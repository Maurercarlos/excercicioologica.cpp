#include <iostream>

//Escreva um programa que determine se um ano fornecido pelo usuário é bissexto ou não. 
//Imprima 1 se for bissexto e 0 se não for.

int main(){

    int num;

    printf("Digite o seu ano: ");
    scanf("%d", &num);

    printf("%d\n", (num % 4 == 0) && (num % 100 != 0));

    return 0;
}