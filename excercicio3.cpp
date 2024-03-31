#include <iostream>

//Escreva um programa que receba três números reais do usuário e imprima a média deles.
int main(){

int num1;
int num2;
int num3; 
int media;

printf("Digite o primeiro número: ");
scanf("%d", &num1);

printf("Digite o segundo número: ");
scanf("%d", &num2);

printf("Digite o terceiro número: ");
scanf("%d", &num3);

//Cálculo da média, para sabermos o resutado;
media = num1 + num2 + num3 / 3;

//Resultado
printf("media: %.2f\n", media);

return 0;
}

//Não feito em aula, desafio para fazer em casa.
//feito em casa, mas aparece esse maldito erro do %.2d no therminal. O código roda, mas com esse erro.