#include <iostream>

//Crie um programa que converta uma temperatura de Celsius para Fahrenheit.
//O usuário deverá fornecer a temperatura em Celsius e o programa imprimirá a temperatura equivalente em Fahrenheit.

int main (){

int temperatura;
int fahrenheit;

printf("Digite a temperatura em °C Celcius: ");
scanf("%d", &temperatura);

fahrenheit = (temperatura * 9/5) + 32;

printf("Fahrenheit: %.2d\n", fahrenheit);
     
     return 0;
}