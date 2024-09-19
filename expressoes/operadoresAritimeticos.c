#include<stdio.h>

int main(void){
    int valor1, valor2, numero;
    int soma, div, mult, sub, resto;

    /**
     * @brief Calcula a soma de dois numeros inteiros
     * 
     * @param valor1 Primeiro numero 
     * @param valor2 Segundo numero 
     * @return soma dos dois numeros 
     */
    soma = valor1 + valor2;

    /**
     * @brief Calcula a subtração de dois numeros inteiros
     * 
     * @param valor1 Primeiro numero 
     * @param valor2 Segundo numero 
     * @return subtração dos dois numeros 
     */
    sub = valor1 - valor2;

    /**
     * @brief Calcula a multiplicação de dois numeros inteiros
     * 
     * @param valor1 Primeiro numero 
     * @param valor2 Segundo numero 
     * @return multiplicação dos dois numeros 
     */
    mult = valor1 * valor2;

    /**
     * @brief Calcula a divisão de dois numeros inteiros
     * 
     * @param valor1 Primeiro numero 
     * @param valor2 Segundo numero 
     * @return divisão dos dois numeros 
     */
    div =  valor1/valor2;

    /**
     * @brief Calcula o resto da divisão de dois numeros inteiros
     * 
     * @param numero Numero a ser dividido
     * @return resto da divisão
     */
    resto = numero%2;

    printf("O valor da soma é: %d + %d = %d\n ", valor1, valor2, soma);
    printf("O valor da Subtração é: %d - %d = %d\n ", valor1, valor2, sub);
    printf("O valor da Multiplicação é: %d * %d = %d\n ", valor1, valor2, mult);
    printf("O valor da Divisão  é: %d / %d = %d\n ", valor1, valor2, div);
    printf("O resto da Divisão  é: %d % 2= %d\n ", numero, resto);

    




    return 0;
}
