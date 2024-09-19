#include<stdio.h>

/**
 * @brief Programa que calcula a média de 2 notas e imprime na tela com 2 casas decimais
 * 
 * Esse programa tem como objetivo calcular a média de 2 notas e imprimir na tela com 2 casas decimais
 * 
 * @return int 0 em caso de sucesso
 */
int main(void){
    float nota1, nota2, media;

    /**
     * @brief Imprime na tela a mensagem "Digite a primeira nota: "
     * 
     */
    printf("Digite a primeira nota: ");
    /**
     * @brief Lê um valor do tipo float da entrada padrão e armazena em nota1
     * 
     */
    scanf("%f", &nota1);

    /**
     * @brief Imprime na tela a mensagem "Digite a segunda nota: "
     * 
     */
    printf("Digite a segunda nota: ");
    /**
     * @brief Lê um valor do tipo float da entrada padrão e armazena em nota2
     * 
     */
    scanf("%f", &nota2);

    /**
     * @brief Calcula a média entre nota1 e nota2
     * 
     */
    media = (nota1+nota2)/2;

    /**
     * @brief Imprime na tela a mensagem "A média do aluno é: " seguido do valor de media com 2 casas decimais
     * 
     */
    printf("A média do aluno é: %.2f\n ",media);
    return 0;
}
