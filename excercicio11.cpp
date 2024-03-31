#include <iostream>

//Escreva um programa que receba a base e a altura de um triângulo 
//do usuário e calcule a área desse triângulo.

int main() {

    int base;
    int altura;
    int area;

    printf("Digite um número: ");
    scanf("%d", &base);

    printf("Digite um número: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2d\n", area);
       
    return 0;

    //Fiz o código. Fui em busca do resultado com o chatgpt e não entendi, o motivo de dar erro na hora de eu colocar o %f -> Float. 
    //Na hora que eu coloquei o %d, ele fez o código, mas pela metade.
    }