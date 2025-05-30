#include<stdio.h>

int main(){

    int numero, resto, soma = 0, n;

    printf("Digite um numero\n");
    scanf("%d",&numero);

    n = numero;

    while (numero > 0){
        resto = numero % 10;
        numero = (numero - resto) / 10;
        soma += resto;
    }

    printf("O algarismo de %d e %d", n,soma);
}