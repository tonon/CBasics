#include<stdio.h>

int main(void){

//operador ternário: pode ser mais curto que usar if/else em algumas ocasiões
int numero;
printf("Digite um numero inteiro: ");
scanf("%d",&numero );

//condição a testar ? verdadeiro : falso

numero> 0 ? printf("Positivo") : printf("Negativo");


return 0;
}