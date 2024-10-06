#include <stdio.h>
int main(void){

    //declarando um vetor com 10 posicoes de inteiros
    int v[10];
    int i;  
    int *pt;

    //leitura de um vetor pelo ponteiro
    pt = v;
    for (i = 0; i < 10; i++){
        printf("digite um valor inteiro: ");
        scanf("%d", pt);    
        pt++;        
    }
    //impressão de um vetor pelo ponteiro
    pt = v;
    for (i = 0; i < 10; i++){
        printf("V[%d] = %d\n", i, *pt);
        pt++;        
    }

    //impressão de um vetor em ordem inversa pelo ponteiro
    pt = &v[9];
    for (i = 9; i >= 0; i--){
        printf("V[%d] = %d\n", i, *pt);
        pt--;        
    }


}