#include<stdio.h>

int main(void){
int count  = 10;

//laço de repeticão for para imprimir numeros inteiros de 0 a 9
//Nessa estrutura de repeticão, o valor inicial de i é 0 e o valor final de i é 9, o incremento de i é 1
//É usado quando o temos o numero de repetições explicitado
for ( int i = 0; i < count; i++){
    printf("Numeros de 0 a 9: %d \n", i);
}
//laço de repetição while para imprimir numeros inteiros de 0 a 9
//Nessa estrutura de repeticão, o valor inicial de i é 10 e o valor final de i é 0, o incremento de i é -1
//É usado quando o temos o numero de repetições indefinido
while (count > 0){
    printf("Numeros de 0 a 9: %d \n", count);
    count--;
}
//laço de repeticão do-while para imprimir numeros inteiros de 0 a 9
//Nessa estrutura de repeticão, o valor inicial de i é 10 e o valor final de i é 0, o incremento de i é -1
//É usado quando o temos o numero de repetições indefinido e deverá ter pelo menos uma repeticão
do{
    printf("Numeros de 0 a 9: %d \n", count);
    count--;
}while(count > 0);

    return 0;
}



