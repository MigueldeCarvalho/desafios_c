#include<stdio.h>
#include<math.h>


int main(){

    srand(time(NULL));

    int numero1 = (rand()%100) + 1;
    int numero2 = (rand()%100) + 1;
    int numero3 = (rand()%100) + 1;
    int numero4 = (rand()%100) + 1;
    int numero5 = (rand()%100) + 1;
    int numero6 = (rand()%100) + 1;
    int numero7 = (rand()%100) + 1;
    int numero8 = (rand()%100) + 1;
    int numero9 = (rand()%100) + 1;
    int numero10 = (rand()%100) + 1;

    int soma;

    int soma1 = numero1 + numero2;
    int soma2 = numero3 + numero4;
    int soma3 = numero5 + numero6;
    int soma4 = numero7 + numero8;
    int soma5 = numero9 + numero10;
    int nota = 0, acertos = 0;

    printf("Exercicio 1: %d + %d= \n", numero1, numero2);
    scanf("%d", &soma);

    if(soma == soma1){

        acertos++;
        nota +=2;
    }

    printf("Exercicio 2: %d + %d= \n", numero3, numero4);
    scanf("%d", &soma);

    if(soma == soma2){

        acertos++;
        nota +=2;
    }

    printf("Exercicio 3: %d + %d= \n", numero5, numero6);
    scanf("%d", &soma);

    if(soma == soma3){

        acertos++;
        nota +=2;
    }

    printf("Exercicio 4: %d + %d= \n", numero7, numero8);
    scanf("%d", &soma);

    if(soma == soma4){

        acertos++;
        nota +=2;
    }

    printf("Exercicio 5: %d + %d= \n", numero9, numero10);
    scanf("%d", &soma);

    if(soma == soma5){

        acertos++;
        nota +=2;
    }

    printf("Sua nota é: %d\n", nota);
    printf("Você acertou %d perguntas. \n", acertos);


}