#include <iostream>

//O programa deve então determinar se a é maior, menor ou igual a b e imprimir a seguinte mensagem: 
//Se a for maior que b: "O número a é maior que b.
//Se a for menor que b: "O número a é menor que b.
//Se a for igual a b: "Os números a e b são iguais.

int main (){

    int a;
    int b;
    int resultado;

    printf("Digite o seu número: ");
    scanf("%d", &a);

    printf("Digite seu número: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a maior que b %d\n", a, b);
    } else if (a < b) {
        printf("a menor que b %d\n", a, b);
    } else (a == b) {
        printf("a igual b %d\n", a, b);
    }
    
    return 0;
}