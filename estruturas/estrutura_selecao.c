#include<stdio.h>

/**
 * @brief Programa que verifica se um numero é par ou impar
 * @details O programa calcula o resto da divisão do numero por 2 e verifica se o resultado é igual a zero
 *          Se sim, o numero é par, caso contrário, é impar
 */
int main(void){

    int numero, resto;
    float nota1, nota2, media;
    int dia;


    //calculo de numero par (divisão por 2 = a zero)
    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero);
    resto = numero%2;

    //estrutura de seleção simples
    if (resto==0){
        printf ("O numero é par\n");
    }else{
        printf("O número é impar\n");
    }

    //Calculo da média de notas de um aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    //estrutura de seleção aninhada
    //Algoritmo que verifica se um aluno foi aprovado, em recuperação ou reprovado
    if(media>=6){
        printf("Aluno aprovado\n");
    }else{
        if(media<3){
            printf("Aluno reprovado\n");
        }else
        {
            printf("Aluno em recuperação\n");
        }
    }

    //switch/case
    //Nessa estrutura não é possivel testar condicionais nos cases, apenas valores 

    //Algoritmo que retorna o dia da semana conforme numero informado pelo usuário
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);
    
    switch (dia)   {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;
    
    default:
        printf("Valor Inválido");
        break;
    }

    return 0;
}
