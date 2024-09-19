#include <stdio.h>

/**
 * @brief Exibe como formatar a impress o de vari veis em C
 * 
 * Nesse programa, ser o exibidos como formatar a impress o de vari veis em C 
 * como int, float, char, string, double.
 */
int main (void){
    int n = 1;//variavel de tipo inteiro
    float n2 = 6.78f;//variavel de tipo float
    char letra = 'a';//variavel de tipo char
    char frase[15] = "Hello World";//variavel de tipo string
    double n3 = 1.38383838;//variavel de tipo double

printf("Exibindo um numero inteiro: %d\n", n);//exibindo o valor da variavel n
printf("Exibindo um numero com ponto flutuante: %f\n", n2);//exibindo o valor da variavel n2 
printf("Exibindo um letra :%c\n ", letra);//exibindo o valor da variavel letra
printf("Exibindo uma frase: %s\n ", frase);//exibindo o valor da variavel frase
printf("Exibindo um double: %f\n", n3);//exibindo o valor da variavel n3
printf("Exibindo tudo: %d %f %c %s %f\n", n, n2, letra, frase,n3);//exibindo todos os valores

    return 0;//retorna sucesso
}