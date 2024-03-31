#include <iostream>

int main(){

    //Faça um programa que receba dois números inteiros 
    //do usuário e imprima a soma desses números.

    int num1;
    int num2;

    //Aqui o usuário seleciona o primeiro número.
    printf("Selecione o primeiro número\n");
    scanf("%d", &num1);

        //Aqui o usuário seleciona o segundo número.
        printf("Selecione o seu segundo número\n");
        scanf("%d", &num2);

            //Aqui definimos a soma dos dois números.
            soma = num1 + num2;

                //Aqui o programa realiza, a soma dos dois números.
                printf("soma: %d", num1, num2);

                return 0;

}

//Resolvido, mas com erro no último printf. Erro do %d", num1 + num2. Coloquei na seguinte forma Soma: %d + %d = soma", num1, num2, soma);

//Revisando em casa essa tarefa, percebi que eu estava colocando o printf logo após o scanf, dando a resposta antes da próxima pergunta.