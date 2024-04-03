#include <iostream>

//Escreva um programa que leia um número inteiro representando a 
//quantidade de horas e converta esse valor para segundos.

int main () {
 
int horas;
int segundos;

printf("Quantas horas?");
scanf("%d", &horas);
 
segundos = horas * 3600;

printf("Sua conversão para segundos fica: %d\n", segundos);

return 0;
    
}