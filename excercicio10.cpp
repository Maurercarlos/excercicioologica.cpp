#include <iostream>

// Faça um programa que receba três notas e seus respectivos pesos do usuário, 
//e calcule a média ponderada dessas notas.

int main (){
 
 //valor de cada nota;
 int nota1;
 int nota2;
 int nota3;

//peso de cada nota;
 int peso1;
 int peso2;
 int peso3;

//Valor da nota e do peso dela;
int valor;

printf("Diga qual a primeira nota: ");
scanf("%d", &nota1);
printf("Seu peso? ");
scanf("%d", &peso1);

printf("Diga qual a primeira nota: ");
scanf("%d", &nota2);
printf("Seu peso? ");
scanf("%d", &peso2);

printf("Diga qual a primeira nota: ");
scanf("%d", &nota3);
printf("Seu peso? ");
scanf("%d", &peso3);
    
valor = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

printf("valor da nota e seu peso: %2.d\n", valor);

    return 0;
}