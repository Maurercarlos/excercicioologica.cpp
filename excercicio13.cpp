#include <iostream>

//Escreva um programa que leia um número inteiro representando a 
//quantidade de horas e converta esse valor para segundos.

int main (){
 
int horas [20];
int segundos [30];

printf("Quantas horas?");
scanf("%d", &horas);
 
segundos = horas * 3600;

printf("segundos: %d\n", horas, segundos);

return 0;
    
}