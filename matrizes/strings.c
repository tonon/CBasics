
#include <stdio.h>
#include <string.h>

int main (void){
    
    //declarando uma matriz de strings
    char v[10][10];
    int i;
    //leitura de uma matriz de strings  
    for (i = 0; i < 10; i++){
        printf("digite uma string: ");
        scanf("%s", v[i]);
    }
    //impressão de uma matriz de strings
    for (i = 0; i < 10; i++){
        printf("V[%d] = %s\n", i, v[i]);
    }

    //string em ordem inversa
    for (i = 9; i >= 0; i--){
        printf("V[%d] = %s\n", i, v[i]);
    }   

    //strcpy


    return 0;
}