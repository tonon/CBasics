#include <stdio.h>
int main(void){
    //declarando um vetor com 10 posicoes de inteiros
    int v[10];
    int i;  
//leitura de um vetor
    for (i = 0; i < 10; i++){
        printf("digite um valor inteiro: ");
        scanf("%d", &v[i]);
    }

//impressão de um vetor
    for (i = 0; i < 10; i++){
        printf("V[%d] = %d\n", i, v[i]);
    }   

    //impressão de um vetor em ordem inversa
    for (i = 9; i >= 0; i--){
        printf("V[%d] = %d\n", i, v[i]);
    }   


    return 0;


}